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

// Function: sub_001C0160
// Address: 0x1c0160 - 0x1c02c0
void sub_001C0160_0x1c0160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0160_0x1c0160");
#endif

    switch (ctx->pc) {
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c01f8u: goto label_1c01f8;
        case 0x1c01fcu: goto label_1c01fc;
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0204u: goto label_1c0204;
        case 0x1c0208u: goto label_1c0208;
        case 0x1c020cu: goto label_1c020c;
        case 0x1c0210u: goto label_1c0210;
        case 0x1c0214u: goto label_1c0214;
        case 0x1c0218u: goto label_1c0218;
        case 0x1c021cu: goto label_1c021c;
        case 0x1c0220u: goto label_1c0220;
        case 0x1c0224u: goto label_1c0224;
        case 0x1c0228u: goto label_1c0228;
        case 0x1c022cu: goto label_1c022c;
        case 0x1c0230u: goto label_1c0230;
        case 0x1c0234u: goto label_1c0234;
        case 0x1c0238u: goto label_1c0238;
        case 0x1c023cu: goto label_1c023c;
        case 0x1c0240u: goto label_1c0240;
        case 0x1c0244u: goto label_1c0244;
        case 0x1c0248u: goto label_1c0248;
        case 0x1c024cu: goto label_1c024c;
        case 0x1c0250u: goto label_1c0250;
        case 0x1c0254u: goto label_1c0254;
        case 0x1c0258u: goto label_1c0258;
        case 0x1c025cu: goto label_1c025c;
        case 0x1c0260u: goto label_1c0260;
        case 0x1c0264u: goto label_1c0264;
        case 0x1c0268u: goto label_1c0268;
        case 0x1c026cu: goto label_1c026c;
        case 0x1c0270u: goto label_1c0270;
        case 0x1c0274u: goto label_1c0274;
        case 0x1c0278u: goto label_1c0278;
        case 0x1c027cu: goto label_1c027c;
        case 0x1c0280u: goto label_1c0280;
        case 0x1c0284u: goto label_1c0284;
        case 0x1c0288u: goto label_1c0288;
        case 0x1c028cu: goto label_1c028c;
        case 0x1c0290u: goto label_1c0290;
        case 0x1c0294u: goto label_1c0294;
        case 0x1c0298u: goto label_1c0298;
        case 0x1c029cu: goto label_1c029c;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02a4u: goto label_1c02a4;
        case 0x1c02a8u: goto label_1c02a8;
        case 0x1c02acu: goto label_1c02ac;
        case 0x1c02b0u: goto label_1c02b0;
        case 0x1c02b4u: goto label_1c02b4;
        case 0x1c02b8u: goto label_1c02b8;
        case 0x1c02bcu: goto label_1c02bc;
        default: break;
    }

    ctx->pc = 0x1c0160u;

label_1c0160:
    // 0x1c0160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c0164:
    // 0x1c0164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c0164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c0168:
    // 0x1c0168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c0168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c016c:
    // 0x1c016c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c016cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c0170:
    // 0x1c0170: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1c0170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c0174:
    // 0x1c0174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0178:
    // 0x1c0178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c0178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c017c:
    // 0x1c017c: 0xc06ce26  jal         func_1B3898
label_1c0180:
    if (ctx->pc == 0x1C0180u) {
        ctx->pc = 0x1C0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C017Cu;
        // 0x1c0180: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0184u;
        goto label_1c0184;
    }
    ctx->pc = 0x1C017Cu;
    SET_GPR_U32(ctx, 31, 0x1C0184u);
    ctx->pc = 0x1C0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C017Cu;
    // 0x1c0180: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1C017Cu, 0x1C0184u)) {
        return;
    }
    ctx->pc = 0x1C0184u;
label_1c0184:
    // 0x1c0184: 0x56020034  bnel        $s0, $v0, . + 4 + (0x34 << 2)
label_1c0188:
    if (ctx->pc == 0x1C0188u) {
        ctx->pc = 0x1C0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0184u;
        // 0x1c0188: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C018Cu;
        goto label_1c018c;
    }
    ctx->pc = 0x1C0184u;
    {
        const bool branch_taken_0x1c0184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0184) {
            ctx->pc = 0x1C0188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0184u;
            // 0x1c0188: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0258u;
            goto label_1c0258;
        }
    }
    ctx->pc = 0x1C018Cu;
label_1c018c:
    // 0x1c018c: 0x8e2202f8  lw          $v0, 0x2F8($s1)
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 760)));
label_1c0190:
    // 0x1c0190: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1c0194:
    if (ctx->pc == 0x1C0194u) {
        ctx->pc = 0x1C0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0190u;
        // 0x1c0194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0198u;
        goto label_1c0198;
    }
    ctx->pc = 0x1C0190u;
    {
        const bool branch_taken_0x1c0190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0190u;
        // 0x1c0194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0190) {
            ctx->pc = 0x1C01C0u;
            goto label_1c01c0;
        }
    }
    ctx->pc = 0x1C0198u;
label_1c0198:
    // 0x1c0198: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1c019c:
    // 0x1c019c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c019cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c01a0:
    // 0x1c01a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c01a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c01a4:
    // 0x1c01a4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c01a8:
    // 0x1c01a8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1c01ac:
    // 0x1c01ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1c01b0:
    // 0x1c01b0: 0x60f809  jalr        $v1
label_1c01b4:
    if (ctx->pc == 0x1C01B4u) {
        ctx->pc = 0x1C01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B0u;
        // 0x1c01b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01B8u;
        goto label_1c01b8;
    }
    ctx->pc = 0x1C01B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C01B8u);
        ctx->pc = 0x1C01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B0u;
        // 0x1c01b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01B0u, 0x1C01B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C01B8u;
label_1c01b8:
    // 0x1c01b8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c01bc:
    if (ctx->pc == 0x1C01BCu) {
        ctx->pc = 0x1C01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B8u;
        // 0x1c01bc: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01C0u;
        goto label_1c01c0;
    }
    ctx->pc = 0x1C01B8u;
    {
        const bool branch_taken_0x1c01b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B8u;
        // 0x1c01bc: 0x8e220274  lw          $v0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b8) {
            ctx->pc = 0x1C020Cu;
            goto label_1c020c;
        }
    }
    ctx->pc = 0x1C01C0u;
label_1c01c0:
    // 0x1c01c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c01c4:
    // 0x1c01c4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1c01c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1c01c8:
    // 0x1c01c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c01c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c01cc:
    // 0x1c01cc: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1c01ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
label_1c01d0:
    // 0x1c01d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01d4:
    // 0x1c01d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c01d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01d8:
    // 0x1c01d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c01dc:
    // 0x1c01dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c01dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01e0:
    // 0x1c01e0: 0xc07bf14  jal         func_1EFC50
label_1c01e4:
    if (ctx->pc == 0x1C01E4u) {
        ctx->pc = 0x1C01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E0u;
        // 0x1c01e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01E8u;
        goto label_1c01e8;
    }
    ctx->pc = 0x1C01E0u;
    SET_GPR_U32(ctx, 31, 0x1C01E8u);
    ctx->pc = 0x1C01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01E0u;
    // 0x1c01e4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFC50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFC50u, 0x1C01E0u, 0x1C01E8u)) {
        return;
    }
    ctx->pc = 0x1C01E8u;
label_1c01e8:
    // 0x1c01e8: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x1c01e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1c01ec:
    // 0x1c01ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01f0:
    // 0x1c01f0: 0xae200304  sw          $zero, 0x304($s1)
    ctx->pc = 0x1c01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
label_1c01f4:
    // 0x1c01f4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c01f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c01f8:
    // 0x1c01f8: 0xae300308  sw          $s0, 0x308($s1)
    ctx->pc = 0x1c01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 776), GPR_U32(ctx, 16));
label_1c01fc:
    // 0x1c01fc: 0xc0c493d  jal         func_3124F4
label_1c0200:
    if (ctx->pc == 0x1C0200u) {
        ctx->pc = 0x1C0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01FCu;
        // 0x1c0200: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0204u;
        goto label_1c0204;
    }
    ctx->pc = 0x1C01FCu;
    SET_GPR_U32(ctx, 31, 0x1C0204u);
    ctx->pc = 0x1C0200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01FCu;
    // 0x1c0200: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C01FCu, 0x1C0204u)) {
        return;
    }
    ctx->pc = 0x1C0204u;
label_1c0204:
    // 0x1c0204: 0xae300300  sw          $s0, 0x300($s1)
    ctx->pc = 0x1c0204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 768), GPR_U32(ctx, 16));
label_1c0208:
    // 0x1c0208: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_1c020c:
    // 0x1c020c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c0210:
    if (ctx->pc == 0x1C0210u) {
        ctx->pc = 0x1C0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C020Cu;
        // 0x1c0210: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0214u;
        goto label_1c0214;
    }
    ctx->pc = 0x1C020Cu;
    {
        const bool branch_taken_0x1c020c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C020Cu;
        // 0x1c0210: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c020c) {
            ctx->pc = 0x1C0220u;
            goto label_1c0220;
        }
    }
    ctx->pc = 0x1C0214u;
label_1c0214:
    // 0x1c0214: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c0214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c0218:
    // 0x1c0218: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c021c:
    if (ctx->pc == 0x1C021Cu) {
        ctx->pc = 0x1C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0218u;
        // 0x1c021c: 0x8c454430  lw          $a1, 0x4430($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0220u;
        goto label_1c0220;
    }
    ctx->pc = 0x1C0218u;
    {
        const bool branch_taken_0x1c0218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0218u;
        // 0x1c021c: 0x8c454430  lw          $a1, 0x4430($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0218) {
            ctx->pc = 0x1C022Cu;
            goto label_1c022c;
        }
    }
    ctx->pc = 0x1C0220u;
label_1c0220:
    // 0x1c0220: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1c0224:
    // 0x1c0224: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1c0224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1c0228:
    // 0x1c0228: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1c0228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17336)));
label_1c022c:
    // 0x1c022c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1c022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1c0230:
    // 0x1c0230: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_1c0234:
    if (ctx->pc == 0x1C0234u) {
        ctx->pc = 0x1C0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0230u;
        // 0x1c0234: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0238u;
        goto label_1c0238;
    }
    ctx->pc = 0x1C0230u;
    {
        const bool branch_taken_0x1c0230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0230u;
        // 0x1c0234: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0230) {
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C0238u;
label_1c0238:
    // 0x1c0238: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c0238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c023c:
    // 0x1c023c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1c0240:
    if (ctx->pc == 0x1C0240u) {
        ctx->pc = 0x1C0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C023Cu;
        // 0x1c0240: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0244u;
        goto label_1c0244;
    }
    ctx->pc = 0x1C023Cu;
    {
        const bool branch_taken_0x1c023c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C023Cu;
        // 0x1c0240: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c023c) {
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C0244u;
label_1c0244:
    // 0x1c0244: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c0244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_1c0248:
    // 0x1c0248: 0xc07fd18  jal         func_1FF460
label_1c024c:
    if (ctx->pc == 0x1C024Cu) {
        ctx->pc = 0x1C024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0248u;
        // 0x1c024c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0250u;
        goto label_1c0250;
    }
    ctx->pc = 0x1C0248u;
    SET_GPR_U32(ctx, 31, 0x1C0250u);
    ctx->pc = 0x1C024Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0248u;
    // 0x1c024c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1C0248u, 0x1C0250u)) {
        return;
    }
    ctx->pc = 0x1C0250u;
label_1c0250:
    // 0x1c0250: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c0254:
    if (ctx->pc == 0x1C0254u) {
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0258u;
        goto label_1c0258;
    }
    ctx->pc = 0x1C0250u;
    {
        const bool branch_taken_0x1c0250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0250u;
        // 0x1c0254: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0250) {
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C0258u;
label_1c0258:
    // 0x1c0258: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1c025c:
    if (ctx->pc == 0x1C025Cu) {
        ctx->pc = 0x1C025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0258u;
        // 0x1c025c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0260u;
        goto label_1c0260;
    }
    ctx->pc = 0x1C0258u;
    {
        const bool branch_taken_0x1c0258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0258u;
        // 0x1c025c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0258) {
            ctx->pc = 0x1C02A8u;
            goto label_1c02a8;
        }
    }
    ctx->pc = 0x1C0260u;
label_1c0260:
    // 0x1c0260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0264:
    // 0x1c0264: 0xc06ba6c  jal         func_1AE9B0
label_1c0268:
    if (ctx->pc == 0x1C0268u) {
        ctx->pc = 0x1C0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0264u;
        // 0x1c0268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C026Cu;
        goto label_1c026c;
    }
    ctx->pc = 0x1C0264u;
    SET_GPR_U32(ctx, 31, 0x1C026Cu);
    ctx->pc = 0x1C0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0264u;
    // 0x1c0268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE9B0u, 0x1C0264u, 0x1C026Cu)) {
        return;
    }
    ctx->pc = 0x1C026Cu;
label_1c026c:
    // 0x1c026c: 0xc06ce22  jal         func_1B3888
label_1c0270:
    if (ctx->pc == 0x1C0270u) {
        ctx->pc = 0x1C0274u;
        goto label_1c0274;
    }
    ctx->pc = 0x1C026Cu;
    SET_GPR_U32(ctx, 31, 0x1C0274u);
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1C026Cu, 0x1C0274u)) {
        return;
    }
    ctx->pc = 0x1C0274u;
label_1c0274:
    // 0x1c0274: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
label_1c0278:
    if (ctx->pc == 0x1C0278u) {
        ctx->pc = 0x1C0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0274u;
        // 0x1c0278: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C027Cu;
        goto label_1c027c;
    }
    ctx->pc = 0x1C0274u;
    {
        const bool branch_taken_0x1c0274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0274u;
        // 0x1c0278: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0274) {
            ctx->pc = 0x1C028Cu;
            goto label_1c028c;
        }
    }
    ctx->pc = 0x1C027Cu;
label_1c027c:
    // 0x1c027c: 0xc0700b0  jal         func_1C02C0
label_1c0280:
    if (ctx->pc == 0x1C0280u) {
        ctx->pc = 0x1C0280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C027Cu;
        // 0x1c0280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0284u;
        goto label_1c0284;
    }
    ctx->pc = 0x1C027Cu;
    SET_GPR_U32(ctx, 31, 0x1C0284u);
    ctx->pc = 0x1C0280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C027Cu;
    // 0x1c0280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C02C0u, 0x1C027Cu, 0x1C0284u)) {
        return;
    }
    ctx->pc = 0x1C0284u;
label_1c0284:
    // 0x1c0284: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c0288:
    if (ctx->pc == 0x1C0288u) {
        ctx->pc = 0x1C0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0284u;
        // 0x1c0288: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C028Cu;
        goto label_1c028c;
    }
    ctx->pc = 0x1C0284u;
    {
        const bool branch_taken_0x1c0284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0284u;
        // 0x1c0288: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0284) {
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C028Cu;
label_1c028c:
    // 0x1c028c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c0290:
    if (ctx->pc == 0x1C0290u) {
        ctx->pc = 0x1C0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C028Cu;
        // 0x1c0290: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0294u;
        goto label_1c0294;
    }
    ctx->pc = 0x1C028Cu;
    {
        const bool branch_taken_0x1c028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C028Cu;
        // 0x1c0290: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c028c) {
            ctx->pc = 0x1C02A8u;
            goto label_1c02a8;
        }
    }
    ctx->pc = 0x1C0294u;
label_1c0294:
    // 0x1c0294: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1c0298:
    if (ctx->pc == 0x1C0298u) {
        ctx->pc = 0x1C0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0294u;
        // 0x1c0298: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C029Cu;
        goto label_1c029c;
    }
    ctx->pc = 0x1C0294u;
    {
        const bool branch_taken_0x1c0294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0294) {
            ctx->pc = 0x1C0298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0294u;
            // 0x1c0298: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C02ACu;
            goto label_1c02ac;
        }
    }
    ctx->pc = 0x1C029Cu;
label_1c029c:
    // 0x1c029c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c029cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c02a0:
    // 0x1c02a0: 0xc06fcda  jal         func_1BF368
label_1c02a4:
    if (ctx->pc == 0x1C02A4u) {
        ctx->pc = 0x1C02A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02A0u;
        // 0x1c02a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02A8u;
        goto label_1c02a8;
    }
    ctx->pc = 0x1C02A0u;
    SET_GPR_U32(ctx, 31, 0x1C02A8u);
    ctx->pc = 0x1C02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02A0u;
    // 0x1c02a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BF368u, 0x1C02A0u, 0x1C02A8u)) {
        return;
    }
    ctx->pc = 0x1C02A8u;
label_1c02a8:
    // 0x1c02a8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c02a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c02ac:
    // 0x1c02ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c02acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c02b0:
    // 0x1c02b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c02b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c02b4:
    // 0x1c02b4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1c02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c02b8:
    // 0x1c02b8: 0x3e00008  jr          $ra
label_1c02bc:
    if (ctx->pc == 0x1C02BCu) {
        ctx->pc = 0x1C02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02B8u;
        // 0x1c02bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02C0u;
        goto label_fallthrough_0x1c02b8;
    }
    ctx->pc = 0x1C02B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02B8u;
        // 0x1c02bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c02b8:
    ctx->pc = 0x1C02C0u;
}
