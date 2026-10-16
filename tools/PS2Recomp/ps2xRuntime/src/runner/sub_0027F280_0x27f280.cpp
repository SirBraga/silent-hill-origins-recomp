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

// Function: sub_0027F280
// Address: 0x27f280 - 0x27f3a0
void sub_0027F280_0x27f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F280_0x27f280");
#endif

    switch (ctx->pc) {
        case 0x27f280u: goto label_27f280;
        case 0x27f284u: goto label_27f284;
        case 0x27f288u: goto label_27f288;
        case 0x27f28cu: goto label_27f28c;
        case 0x27f290u: goto label_27f290;
        case 0x27f294u: goto label_27f294;
        case 0x27f298u: goto label_27f298;
        case 0x27f29cu: goto label_27f29c;
        case 0x27f2a0u: goto label_27f2a0;
        case 0x27f2a4u: goto label_27f2a4;
        case 0x27f2a8u: goto label_27f2a8;
        case 0x27f2acu: goto label_27f2ac;
        case 0x27f2b0u: goto label_27f2b0;
        case 0x27f2b4u: goto label_27f2b4;
        case 0x27f2b8u: goto label_27f2b8;
        case 0x27f2bcu: goto label_27f2bc;
        case 0x27f2c0u: goto label_27f2c0;
        case 0x27f2c4u: goto label_27f2c4;
        case 0x27f2c8u: goto label_27f2c8;
        case 0x27f2ccu: goto label_27f2cc;
        case 0x27f2d0u: goto label_27f2d0;
        case 0x27f2d4u: goto label_27f2d4;
        case 0x27f2d8u: goto label_27f2d8;
        case 0x27f2dcu: goto label_27f2dc;
        case 0x27f2e0u: goto label_27f2e0;
        case 0x27f2e4u: goto label_27f2e4;
        case 0x27f2e8u: goto label_27f2e8;
        case 0x27f2ecu: goto label_27f2ec;
        case 0x27f2f0u: goto label_27f2f0;
        case 0x27f2f4u: goto label_27f2f4;
        case 0x27f2f8u: goto label_27f2f8;
        case 0x27f2fcu: goto label_27f2fc;
        case 0x27f300u: goto label_27f300;
        case 0x27f304u: goto label_27f304;
        case 0x27f308u: goto label_27f308;
        case 0x27f30cu: goto label_27f30c;
        case 0x27f310u: goto label_27f310;
        case 0x27f314u: goto label_27f314;
        case 0x27f318u: goto label_27f318;
        case 0x27f31cu: goto label_27f31c;
        case 0x27f320u: goto label_27f320;
        case 0x27f324u: goto label_27f324;
        case 0x27f328u: goto label_27f328;
        case 0x27f32cu: goto label_27f32c;
        case 0x27f330u: goto label_27f330;
        case 0x27f334u: goto label_27f334;
        case 0x27f338u: goto label_27f338;
        case 0x27f33cu: goto label_27f33c;
        case 0x27f340u: goto label_27f340;
        case 0x27f344u: goto label_27f344;
        case 0x27f348u: goto label_27f348;
        case 0x27f34cu: goto label_27f34c;
        case 0x27f350u: goto label_27f350;
        case 0x27f354u: goto label_27f354;
        case 0x27f358u: goto label_27f358;
        case 0x27f35cu: goto label_27f35c;
        case 0x27f360u: goto label_27f360;
        case 0x27f364u: goto label_27f364;
        case 0x27f368u: goto label_27f368;
        case 0x27f36cu: goto label_27f36c;
        case 0x27f370u: goto label_27f370;
        case 0x27f374u: goto label_27f374;
        case 0x27f378u: goto label_27f378;
        case 0x27f37cu: goto label_27f37c;
        case 0x27f380u: goto label_27f380;
        case 0x27f384u: goto label_27f384;
        case 0x27f388u: goto label_27f388;
        case 0x27f38cu: goto label_27f38c;
        case 0x27f390u: goto label_27f390;
        case 0x27f394u: goto label_27f394;
        case 0x27f398u: goto label_27f398;
        case 0x27f39cu: goto label_27f39c;
        default: break;
    }

    ctx->pc = 0x27f280u;

label_27f280:
    // 0x27f280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27f284:
    // 0x27f284: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x27f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_27f288:
    // 0x27f288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27f28c:
    // 0x27f28c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27f28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27f290:
    // 0x27f290: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x27f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_27f294:
    // 0x27f294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27f294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27f298:
    // 0x27f298: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x27f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_27f29c:
    // 0x27f29c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x27f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_27f2a0:
    // 0x27f2a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27f2a4:
    // 0x27f2a4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x27f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27f2a8:
    // 0x27f2a8: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
label_27f2ac:
    if (ctx->pc == 0x27F2ACu) {
        ctx->pc = 0x27F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2A8u;
        // 0x27f2ac: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2B0u;
        goto label_27f2b0;
    }
    ctx->pc = 0x27F2A8u;
    {
        const bool branch_taken_0x27f2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2A8u;
        // 0x27f2ac: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2a8) {
            ctx->pc = 0x27F37Cu;
            goto label_27f37c;
        }
    }
    ctx->pc = 0x27F2B0u;
label_27f2b0:
    // 0x27f2b0: 0xc09f90a  jal         func_27E428
label_27f2b4:
    if (ctx->pc == 0x27F2B4u) {
        ctx->pc = 0x27F2B8u;
        goto label_27f2b8;
    }
    ctx->pc = 0x27F2B0u;
    SET_GPR_U32(ctx, 31, 0x27F2B8u);
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27F2B0u, 0x27F2B8u)) {
        return;
    }
    ctx->pc = 0x27F2B8u;
label_27f2b8:
    // 0x27f2b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f2bc:
    // 0x27f2bc: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_27f2c0:
    if (ctx->pc == 0x27F2C0u) {
        ctx->pc = 0x27F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2BCu;
        // 0x27f2c0: 0x8f8287fc  lw          $v0, -0x7804($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2C4u;
        goto label_27f2c4;
    }
    ctx->pc = 0x27F2BCu;
    {
        const bool branch_taken_0x27f2bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2BCu;
        // 0x27f2c0: 0x8f8287fc  lw          $v0, -0x7804($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2bc) {
            ctx->pc = 0x27F378u;
            goto label_27f378;
        }
    }
    ctx->pc = 0x27F2C4u;
label_27f2c4:
    // 0x27f2c4: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x27f2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_27f2c8:
    // 0x27f2c8: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x27f2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_27f2cc:
    // 0x27f2cc: 0xc09f90a  jal         func_27E428
label_27f2d0:
    if (ctx->pc == 0x27F2D0u) {
        ctx->pc = 0x27F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2CCu;
        // 0x27f2d0: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2D4u;
        goto label_27f2d4;
    }
    ctx->pc = 0x27F2CCu;
    SET_GPR_U32(ctx, 31, 0x27F2D4u);
    ctx->pc = 0x27F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2CCu;
    // 0x27f2d0: 0x202a021  addu        $s4, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x27E428u, 0x27F2CCu, 0x27F2D4u)) {
        return;
    }
    ctx->pc = 0x27F2D4u;
label_27f2d4:
    // 0x27f2d4: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27f2d8:
    // 0x27f2d8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x27f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_27f2dc:
    // 0x27f2dc: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_27f2e0:
    // 0x27f2e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x27f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_27f2e4:
    // 0x27f2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f2e8:
    // 0x27f2e8: 0x40f809  jalr        $v0
label_27f2ec:
    if (ctx->pc == 0x27F2ECu) {
        ctx->pc = 0x27F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2E8u;
        // 0x27f2ec: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2F0u;
        goto label_27f2f0;
    }
    ctx->pc = 0x27F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27F2F0u);
        ctx->pc = 0x27F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2E8u;
        // 0x27f2ec: 0x34a50122  ori         $a1, $a1, 0x122 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)290);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F2E8u, 0x27F2F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F2F0u;
label_27f2f0:
    // 0x27f2f0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_27f2f4:
    if (ctx->pc == 0x27F2F4u) {
        ctx->pc = 0x27F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2F0u;
        // 0x27f2f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F2F8u;
        goto label_27f2f8;
    }
    ctx->pc = 0x27F2F0u;
    {
        const bool branch_taken_0x27f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2F0u;
        // 0x27f2f4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2f0) {
            ctx->pc = 0x27F328u;
            goto label_27f328;
        }
    }
    ctx->pc = 0x27F2F8u;
label_27f2f8:
    // 0x27f2f8: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x27f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_27f2fc:
    // 0x27f2fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x27f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_27f300:
    // 0x27f300: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x27f300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_27f304:
    // 0x27f304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f308:
    // 0x27f308: 0xc092848  jal         func_24A120
label_27f30c:
    if (ctx->pc == 0x27F30Cu) {
        ctx->pc = 0x27F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F308u;
        // 0x27f30c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F310u;
        goto label_27f310;
    }
    ctx->pc = 0x27F308u;
    SET_GPR_U32(ctx, 31, 0x27F310u);
    ctx->pc = 0x27F30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F308u;
    // 0x27f30c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x27F308u, 0x27F310u)) {
        return;
    }
    ctx->pc = 0x27F310u;
label_27f310:
    // 0x27f310: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27f314:
    // 0x27f314: 0xc09281a  jal         func_24A068
label_27f318:
    if (ctx->pc == 0x27F318u) {
        ctx->pc = 0x27F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F314u;
        // 0x27f318: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F31Cu;
        goto label_27f31c;
    }
    ctx->pc = 0x27F314u;
    SET_GPR_U32(ctx, 31, 0x27F31Cu);
    ctx->pc = 0x27F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F314u;
    // 0x27f318: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x27F314u, 0x27F31Cu)) {
        return;
    }
    ctx->pc = 0x27F31Cu;
label_27f31c:
    // 0x27f31c: 0x10000007  b           . + 4 + (0x7 << 2)
label_27f320:
    if (ctx->pc == 0x27F320u) {
        ctx->pc = 0x27F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F31Cu;
        // 0x27f320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F324u;
        goto label_27f324;
    }
    ctx->pc = 0x27F31Cu;
    {
        const bool branch_taken_0x27f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F31Cu;
        // 0x27f320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f31c) {
            ctx->pc = 0x27F33Cu;
            goto label_27f33c;
        }
    }
    ctx->pc = 0x27F324u;
label_27f324:
    // 0x27f324: 0x0  nop
    ctx->pc = 0x27f324u;
    // NOP
label_27f328:
    // 0x27f328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f32c:
    // 0x27f32c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f330:
    // 0x27f330: 0xc0c493d  jal         func_3124F4
label_27f334:
    if (ctx->pc == 0x27F334u) {
        ctx->pc = 0x27F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F330u;
        // 0x27f334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F338u;
        goto label_27f338;
    }
    ctx->pc = 0x27F330u;
    SET_GPR_U32(ctx, 31, 0x27F338u);
    ctx->pc = 0x27F334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F330u;
    // 0x27f334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27F330u, 0x27F338u)) {
        return;
    }
    ctx->pc = 0x27F338u;
label_27f338:
    // 0x27f338: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x27f338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f33c:
    // 0x27f33c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_27f340:
    if (ctx->pc == 0x27F340u) {
        ctx->pc = 0x27F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F33Cu;
        // 0x27f340: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F344u;
        goto label_27f344;
    }
    ctx->pc = 0x27F33Cu;
    {
        const bool branch_taken_0x27f33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f33c) {
            ctx->pc = 0x27F340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F33Cu;
            // 0x27f340: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F370u;
            goto label_27f370;
        }
    }
    ctx->pc = 0x27F344u;
label_27f344:
    // 0x27f344: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x27f344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27f348:
    // 0x27f348: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_27f34c:
    if (ctx->pc == 0x27F34Cu) {
        ctx->pc = 0x27F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F348u;
        // 0x27f34c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F350u;
        goto label_27f350;
    }
    ctx->pc = 0x27F348u;
    {
        const bool branch_taken_0x27f348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F348u;
        // 0x27f34c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f348) {
            ctx->pc = 0x27F360u;
            goto label_27f360;
        }
    }
    ctx->pc = 0x27F350u;
label_27f350:
    // 0x27f350: 0xc075fdc  jal         func_1D7F70
label_27f354:
    if (ctx->pc == 0x27F354u) {
        ctx->pc = 0x27F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F350u;
        // 0x27f354: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F358u;
        goto label_27f358;
    }
    ctx->pc = 0x27F350u;
    SET_GPR_U32(ctx, 31, 0x27F358u);
    ctx->pc = 0x27F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F350u;
    // 0x27f354: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x27F350u, 0x27F358u)) {
        return;
    }
    ctx->pc = 0x27F358u;
label_27f358:
    // 0x27f358: 0x10000005  b           . + 4 + (0x5 << 2)
label_27f35c:
    if (ctx->pc == 0x27F35Cu) {
        ctx->pc = 0x27F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F358u;
        // 0x27f35c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F360u;
        goto label_27f360;
    }
    ctx->pc = 0x27F358u;
    {
        const bool branch_taken_0x27f358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F358u;
        // 0x27f35c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f358) {
            ctx->pc = 0x27F370u;
            goto label_27f370;
        }
    }
    ctx->pc = 0x27F360u;
label_27f360:
    // 0x27f360: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x27f360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_27f364:
    // 0x27f364: 0xc0c493d  jal         func_3124F4
label_27f368:
    if (ctx->pc == 0x27F368u) {
        ctx->pc = 0x27F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F364u;
        // 0x27f368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F36Cu;
        goto label_27f36c;
    }
    ctx->pc = 0x27F364u;
    SET_GPR_U32(ctx, 31, 0x27F36Cu);
    ctx->pc = 0x27F368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F364u;
    // 0x27f368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x27F364u, 0x27F36Cu)) {
        return;
    }
    ctx->pc = 0x27F36Cu;
label_27f36c:
    // 0x27f36c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x27f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_27f370:
    // 0x27f370: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x27f370u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_27f374:
    // 0x27f374: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x27f374u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_27f378:
    // 0x27f378: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x27f378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f37c:
    // 0x27f37c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x27f37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27f380:
    // 0x27f380: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x27f380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27f384:
    // 0x27f384: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x27f384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f388:
    // 0x27f388: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f38c:
    // 0x27f38c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x27f38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f390:
    // 0x27f390: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27f394:
    // 0x27f394: 0x3e00008  jr          $ra
label_27f398:
    if (ctx->pc == 0x27F398u) {
        ctx->pc = 0x27F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F394u;
        // 0x27f398: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27F39Cu;
        goto label_27f39c;
    }
    ctx->pc = 0x27F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F394u;
        // 0x27f398: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F39Cu;
label_27f39c:
    // 0x27f39c: 0x0  nop
    ctx->pc = 0x27f39cu;
    // NOP
    ctx->pc = 0x27f3a0u;
}
