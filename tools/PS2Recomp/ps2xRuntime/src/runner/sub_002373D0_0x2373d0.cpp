#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002373D0
// Address: 0x2373d0 - 0x2375e0
void sub_002373D0_0x2373d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002373D0_0x2373d0");
#endif

    switch (ctx->pc) {
        case 0x23745cu: goto label_23745c;
        case 0x2374c8u: goto label_2374c8;
        case 0x237518u: goto label_237518;
        case 0x237554u: goto label_237554;
        case 0x2375b8u: goto label_2375b8;
        default: break;
    }

    ctx->pc = 0x2373d0u;

    // 0x2373d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2373d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2373d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2373d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2373d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2373d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2373dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2373dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2373e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2373e4: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x2373e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2373e8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2373ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2373ECu;
    {
        const bool branch_taken_0x2373ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2373ec) {
            ctx->pc = 0x2373F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373ECu;
            // 0x2373f0: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373FCu;
            goto label_2373fc;
        }
    }
    ctx->pc = 0x2373F4u;
    // 0x2373f4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2373F4u;
    {
        const bool branch_taken_0x2373f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373F4u;
        // 0x2373f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373f4) {
            ctx->pc = 0x2375CCu;
            goto label_2375cc;
        }
    }
    ctx->pc = 0x2373FCu;
label_2373fc:
    // 0x2373fc: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2373fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x237400: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x237400u;
    {
        const bool branch_taken_0x237400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237400u;
        // 0x237404: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237400) {
            ctx->pc = 0x237464u;
            goto label_237464;
        }
    }
    ctx->pc = 0x237408u;
    // 0x237408: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x237408u;
    {
        const bool branch_taken_0x237408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237408) {
            ctx->pc = 0x23740Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237408u;
            // 0x23740c: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237420u;
            goto label_237420;
        }
    }
    ctx->pc = 0x237410u;
    // 0x237410: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x237410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237414: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x237414u;
    {
        const bool branch_taken_0x237414 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x237418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237414u;
        // 0x237418: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237414) {
            ctx->pc = 0x23746Cu;
            goto label_23746c;
        }
    }
    ctx->pc = 0x23741Cu;
    // 0x23741c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_237420:
    // 0x237420: 0x10e0005b  beqz        $a3, . + 4 + (0x5B << 2)
    ctx->pc = 0x237420u;
    {
        const bool branch_taken_0x237420 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237420u;
        // 0x237424: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237420) {
            ctx->pc = 0x237590u;
            goto label_237590;
        }
    }
    ctx->pc = 0x237428u;
    // 0x237428: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x237428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23742c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x237430: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x237430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237434: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x237438: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x237438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x23743c: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x23743cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x237440: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x237440u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x237444: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x237448: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x237448u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
    // 0x23744c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x237450: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x237450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x237454: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x237454u;
    SET_GPR_U32(ctx, 31, 0x23745Cu);
    ctx->pc = 0x237458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237454u;
    // 0x237458: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x237454u, 0x23745Cu)) {
        return;
    }
    ctx->pc = 0x23745Cu;
label_23745c:
    // 0x23745c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x23745Cu;
    {
        const bool branch_taken_0x23745c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23745Cu;
        // 0x237460: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23745c) {
            ctx->pc = 0x237594u;
            goto label_237594;
        }
    }
    ctx->pc = 0x237464u;
label_237464:
    // 0x237464: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x237464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x237468: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x237468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B416Cu));
label_23746c:
    // 0x23746c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x237470: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x237470u;
    {
        const bool branch_taken_0x237470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x237474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237470u;
        // 0x237474: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237470) {
            ctx->pc = 0x237554u;
            goto label_237554;
        }
    }
    ctx->pc = 0x237478u;
    // 0x237478: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x237478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x23747c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237480: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x237480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x237484: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x237484u;
    {
        const bool branch_taken_0x237484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237484u;
        // 0x237488: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237484) {
            ctx->pc = 0x2374D0u;
            goto label_2374d0;
        }
    }
    ctx->pc = 0x23748Cu;
    // 0x23748c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x237490: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x237490u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x237494: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x237494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x237498: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x237498u;
    {
        const bool branch_taken_0x237498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237498u;
        // 0x23749c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237498) {
            ctx->pc = 0x2374D4u;
            goto label_2374d4;
        }
    }
    ctx->pc = 0x2374A0u;
    // 0x2374a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2374a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2374a4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2374a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2374a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2374A8u;
    {
        const bool branch_taken_0x2374a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2374ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374A8u;
        // 0x2374ac: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374a8) {
            ctx->pc = 0x2374D4u;
            goto label_2374d4;
        }
    }
    ctx->pc = 0x2374B0u;
    // 0x2374b0: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x2374b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x2374b4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2374b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2374b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2374B8u;
    {
        const bool branch_taken_0x2374b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2374BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374B8u;
        // 0x2374bc: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374b8) {
            ctx->pc = 0x2374D4u;
            goto label_2374d4;
        }
    }
    ctx->pc = 0x2374C0u;
    // 0x2374c0: 0xc08d994  jal         func_236650
    ctx->pc = 0x2374C0u;
    SET_GPR_U32(ctx, 31, 0x2374C8u);
    ctx->pc = 0x2374C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374C0u;
    // 0x2374c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x236650u, 0x2374C0u, 0x2374C8u)) {
        return;
    }
    ctx->pc = 0x2374C8u;
label_2374c8:
    // 0x2374c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2374C8u;
    {
        const bool branch_taken_0x2374c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374C8u;
        // 0x2374cc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374c8) {
            ctx->pc = 0x23751Cu;
            goto label_23751c;
        }
    }
    ctx->pc = 0x2374D0u;
label_2374d0:
    // 0x2374d0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2374d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2374d4:
    // 0x2374d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2374D4u;
    {
        const bool branch_taken_0x2374d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2374D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374D4u;
        // 0x2374d8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2374d4) {
            ctx->pc = 0x237518u;
            goto label_237518;
        }
    }
    ctx->pc = 0x2374DCu;
    // 0x2374dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2374dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2374e0: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x2374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x2374e4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2374e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2374e8: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2374E8u;
    {
        const bool branch_taken_0x2374e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2374e8) {
            ctx->pc = 0x2374ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2374E8u;
            // 0x2374ec: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23751Cu;
            goto label_23751c;
        }
    }
    ctx->pc = 0x2374F0u;
    // 0x2374f0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2374f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2374f4: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x2374f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2374f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2374F8u;
    {
        const bool branch_taken_0x2374f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2374f8) {
            ctx->pc = 0x2374FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2374F8u;
            // 0x2374fc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23751Cu;
            goto label_23751c;
        }
    }
    ctx->pc = 0x237500u;
    // 0x237500: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x237500u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x237504: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x237504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x237508: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237508u;
    {
        const bool branch_taken_0x237508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237508) {
            ctx->pc = 0x23750Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237508u;
            // 0x23750c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23751Cu;
            goto label_23751c;
        }
    }
    ctx->pc = 0x237510u;
    // 0x237510: 0xc08da2e  jal         func_2368B8
    ctx->pc = 0x237510u;
    SET_GPR_U32(ctx, 31, 0x237518u);
    ctx->pc = 0x237514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237510u;
    // 0x237514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2368B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2368B8u, 0x237510u, 0x237518u)) {
        return;
    }
    ctx->pc = 0x237518u;
label_237518:
    // 0x237518: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x237518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23751c:
    // 0x23751c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x23751cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237520: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x237524: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x237528: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x237528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x23752c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x23752cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x237530: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x237530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237534: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x237534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x237538: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x237538u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23753c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x23753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x237540: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x237540u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x237544: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x237544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x237548: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x23754c: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x23754Cu;
    SET_GPR_U32(ctx, 31, 0x237554u);
    ctx->pc = 0x237550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23754Cu;
    // 0x237550: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x23754Cu, 0x237554u)) {
        return;
    }
    ctx->pc = 0x237554u;
label_237554:
    // 0x237554: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x237554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x237558: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x23755c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x237560: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x237560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x237564: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x237564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x237568: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x237568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x23756c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x23756cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x237570: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x237570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x237574: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x237574u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x237578: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x237578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23757c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23757Cu;
    {
        const bool branch_taken_0x23757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23757c) {
            ctx->pc = 0x237580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23757Cu;
            // 0x237580: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237594u;
            goto label_237594;
        }
    }
    ctx->pc = 0x237584u;
    // 0x237584: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x237584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x237588: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x237588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x23758c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23758cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_237590:
    // 0x237590: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x237590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_237594:
    // 0x237594: 0x3c039004  lui         $v1, 0x9004
    ctx->pc = 0x237594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36868 << 16));
    // 0x237598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23759c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23759Cu;
    {
        const bool branch_taken_0x23759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2375A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23759Cu;
        // 0x2375a0: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23759c) {
            ctx->pc = 0x2375C0u;
            goto label_2375c0;
        }
    }
    ctx->pc = 0x2375A4u;
    // 0x2375a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2375a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2375a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2375ac: 0x304200d9  andi        $v0, $v0, 0xD9
    ctx->pc = 0x2375acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)217);
    // 0x2375b0: 0xc08aca6  jal         func_22B298
    ctx->pc = 0x2375B0u;
    SET_GPR_U32(ctx, 31, 0x2375B8u);
    ctx->pc = 0x2375B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2375B0u;
    // 0x2375b4: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B298u, 0x2375B0u, 0x2375B8u)) {
        return;
    }
    ctx->pc = 0x2375B8u;
label_2375b8:
    // 0x2375b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2375B8u;
    {
        const bool branch_taken_0x2375b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375B8u;
        // 0x2375bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375b8) {
            ctx->pc = 0x2375CCu;
            goto label_2375cc;
        }
    }
    ctx->pc = 0x2375C0u;
label_2375c0:
    // 0x2375c0: 0x304200d9  andi        $v0, $v0, 0xD9
    ctx->pc = 0x2375c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)217);
    // 0x2375c4: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x2375c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x2375c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2375cc:
    // 0x2375cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2375ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2375d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2375d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2375d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2375d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2375d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2375D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2375DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375D8u;
        // 0x2375dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2375D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2375E0u;
}
