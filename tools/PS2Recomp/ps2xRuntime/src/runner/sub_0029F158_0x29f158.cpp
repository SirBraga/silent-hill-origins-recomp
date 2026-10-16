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

// Function: sub_0029F158
// Address: 0x29f158 - 0x29f338
void sub_0029F158_0x29f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F158_0x29f158");
#endif

    switch (ctx->pc) {
        case 0x29f158u: goto label_29f158;
        case 0x29f15cu: goto label_29f15c;
        case 0x29f160u: goto label_29f160;
        case 0x29f164u: goto label_29f164;
        case 0x29f168u: goto label_29f168;
        case 0x29f16cu: goto label_29f16c;
        case 0x29f170u: goto label_29f170;
        case 0x29f174u: goto label_29f174;
        case 0x29f178u: goto label_29f178;
        case 0x29f17cu: goto label_29f17c;
        case 0x29f180u: goto label_29f180;
        case 0x29f184u: goto label_29f184;
        case 0x29f188u: goto label_29f188;
        case 0x29f18cu: goto label_29f18c;
        case 0x29f190u: goto label_29f190;
        case 0x29f194u: goto label_29f194;
        case 0x29f198u: goto label_29f198;
        case 0x29f19cu: goto label_29f19c;
        case 0x29f1a0u: goto label_29f1a0;
        case 0x29f1a4u: goto label_29f1a4;
        case 0x29f1a8u: goto label_29f1a8;
        case 0x29f1acu: goto label_29f1ac;
        case 0x29f1b0u: goto label_29f1b0;
        case 0x29f1b4u: goto label_29f1b4;
        case 0x29f1b8u: goto label_29f1b8;
        case 0x29f1bcu: goto label_29f1bc;
        case 0x29f1c0u: goto label_29f1c0;
        case 0x29f1c4u: goto label_29f1c4;
        case 0x29f1c8u: goto label_29f1c8;
        case 0x29f1ccu: goto label_29f1cc;
        case 0x29f1d0u: goto label_29f1d0;
        case 0x29f1d4u: goto label_29f1d4;
        case 0x29f1d8u: goto label_29f1d8;
        case 0x29f1dcu: goto label_29f1dc;
        case 0x29f1e0u: goto label_29f1e0;
        case 0x29f1e4u: goto label_29f1e4;
        case 0x29f1e8u: goto label_29f1e8;
        case 0x29f1ecu: goto label_29f1ec;
        case 0x29f1f0u: goto label_29f1f0;
        case 0x29f1f4u: goto label_29f1f4;
        case 0x29f1f8u: goto label_29f1f8;
        case 0x29f1fcu: goto label_29f1fc;
        case 0x29f200u: goto label_29f200;
        case 0x29f204u: goto label_29f204;
        case 0x29f208u: goto label_29f208;
        case 0x29f20cu: goto label_29f20c;
        case 0x29f210u: goto label_29f210;
        case 0x29f214u: goto label_29f214;
        case 0x29f218u: goto label_29f218;
        case 0x29f21cu: goto label_29f21c;
        case 0x29f220u: goto label_29f220;
        case 0x29f224u: goto label_29f224;
        case 0x29f228u: goto label_29f228;
        case 0x29f22cu: goto label_29f22c;
        case 0x29f230u: goto label_29f230;
        case 0x29f234u: goto label_29f234;
        case 0x29f238u: goto label_29f238;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f240u: goto label_29f240;
        case 0x29f244u: goto label_29f244;
        case 0x29f248u: goto label_29f248;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f250u: goto label_29f250;
        case 0x29f254u: goto label_29f254;
        case 0x29f258u: goto label_29f258;
        case 0x29f25cu: goto label_29f25c;
        case 0x29f260u: goto label_29f260;
        case 0x29f264u: goto label_29f264;
        case 0x29f268u: goto label_29f268;
        case 0x29f26cu: goto label_29f26c;
        case 0x29f270u: goto label_29f270;
        case 0x29f274u: goto label_29f274;
        case 0x29f278u: goto label_29f278;
        case 0x29f27cu: goto label_29f27c;
        case 0x29f280u: goto label_29f280;
        case 0x29f284u: goto label_29f284;
        case 0x29f288u: goto label_29f288;
        case 0x29f28cu: goto label_29f28c;
        case 0x29f290u: goto label_29f290;
        case 0x29f294u: goto label_29f294;
        case 0x29f298u: goto label_29f298;
        case 0x29f29cu: goto label_29f29c;
        case 0x29f2a0u: goto label_29f2a0;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2a8u: goto label_29f2a8;
        case 0x29f2acu: goto label_29f2ac;
        case 0x29f2b0u: goto label_29f2b0;
        case 0x29f2b4u: goto label_29f2b4;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2bcu: goto label_29f2bc;
        case 0x29f2c0u: goto label_29f2c0;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2c8u: goto label_29f2c8;
        case 0x29f2ccu: goto label_29f2cc;
        case 0x29f2d0u: goto label_29f2d0;
        case 0x29f2d4u: goto label_29f2d4;
        case 0x29f2d8u: goto label_29f2d8;
        case 0x29f2dcu: goto label_29f2dc;
        case 0x29f2e0u: goto label_29f2e0;
        case 0x29f2e4u: goto label_29f2e4;
        case 0x29f2e8u: goto label_29f2e8;
        case 0x29f2ecu: goto label_29f2ec;
        case 0x29f2f0u: goto label_29f2f0;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f2f8u: goto label_29f2f8;
        case 0x29f2fcu: goto label_29f2fc;
        case 0x29f300u: goto label_29f300;
        case 0x29f304u: goto label_29f304;
        case 0x29f308u: goto label_29f308;
        case 0x29f30cu: goto label_29f30c;
        case 0x29f310u: goto label_29f310;
        case 0x29f314u: goto label_29f314;
        case 0x29f318u: goto label_29f318;
        case 0x29f31cu: goto label_29f31c;
        case 0x29f320u: goto label_29f320;
        case 0x29f324u: goto label_29f324;
        case 0x29f328u: goto label_29f328;
        case 0x29f32cu: goto label_29f32c;
        case 0x29f330u: goto label_29f330;
        case 0x29f334u: goto label_29f334;
        default: break;
    }

    ctx->pc = 0x29f158u;

label_29f158:
    // 0x29f158: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29f15c:
    // 0x29f15c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x29f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_29f160:
    // 0x29f160: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29f164:
    // 0x29f164: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x29f164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_29f168:
    // 0x29f168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29f16c:
    // 0x29f16c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29f16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29f170:
    // 0x29f170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f174:
    // 0x29f174: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x29f174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_29f178:
    // 0x29f178: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x29f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_29f17c:
    // 0x29f17c: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_29f180:
    if (ctx->pc == 0x29F180u) {
        ctx->pc = 0x29F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F17Cu;
        // 0x29f180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F184u;
        goto label_29f184;
    }
    ctx->pc = 0x29F17Cu;
    {
        const bool branch_taken_0x29f17c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x29F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F17Cu;
        // 0x29f180: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f17c) {
            ctx->pc = 0x29F1B4u;
            goto label_29f1b4;
        }
    }
    ctx->pc = 0x29F184u;
label_29f184:
    // 0x29f184: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_29f188:
    // 0x29f188: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_29f18c:
    // 0x29f18c: 0xc0a8ba6  jal         func_2A2E98
label_29f190:
    if (ctx->pc == 0x29F190u) {
        ctx->pc = 0x29F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F18Cu;
        // 0x29f190: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F194u;
        goto label_29f194;
    }
    ctx->pc = 0x29F18Cu;
    SET_GPR_U32(ctx, 31, 0x29F194u);
    ctx->pc = 0x29F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F18Cu;
    // 0x29f190: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E98u, 0x29F18Cu, 0x29F194u)) {
        return;
    }
    ctx->pc = 0x29F194u;
label_29f194:
    // 0x29f194: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29f198:
    // 0x29f198: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x29f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_29f19c:
    // 0x29f19c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_29f1a0:
    if (ctx->pc == 0x29F1A0u) {
        ctx->pc = 0x29F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F19Cu;
        // 0x29f1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F1A4u;
        goto label_29f1a4;
    }
    ctx->pc = 0x29F19Cu;
    {
        const bool branch_taken_0x29f19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F19Cu;
        // 0x29f1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f19c) {
            ctx->pc = 0x29F1B8u;
            goto label_29f1b8;
        }
    }
    ctx->pc = 0x29F1A4u;
label_29f1a4:
    // 0x29f1a4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29f1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29f1a8:
    // 0x29f1a8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x29f1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_29f1ac:
    // 0x29f1ac: 0x40f809  jalr        $v0
label_29f1b0:
    if (ctx->pc == 0x29F1B0u) {
        ctx->pc = 0x29F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1ACu;
        // 0x29f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F1B4u;
        goto label_29f1b4;
    }
    ctx->pc = 0x29F1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F1B4u);
        ctx->pc = 0x29F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1ACu;
        // 0x29f1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F1ACu, 0x29F1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F1B4u;
label_29f1b4:
    // 0x29f1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f1b8:
    // 0x29f1b8: 0xc0a6dfe  jal         func_29B7F8
label_29f1bc:
    if (ctx->pc == 0x29F1BCu) {
        ctx->pc = 0x29F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1B8u;
        // 0x29f1bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F1C0u;
        goto label_29f1c0;
    }
    ctx->pc = 0x29F1B8u;
    SET_GPR_U32(ctx, 31, 0x29F1C0u);
    ctx->pc = 0x29F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1B8u;
    // 0x29f1bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B7F8u, 0x29F1B8u, 0x29F1C0u)) {
        return;
    }
    ctx->pc = 0x29F1C0u;
label_29f1c0:
    // 0x29f1c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29f1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29f1c4:
    // 0x29f1c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29f1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f1c8:
    // 0x29f1c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f1c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f1cc:
    // 0x29f1cc: 0x3e00008  jr          $ra
label_29f1d0:
    if (ctx->pc == 0x29F1D0u) {
        ctx->pc = 0x29F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1CCu;
        // 0x29f1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F1D4u;
        goto label_29f1d4;
    }
    ctx->pc = 0x29F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1CCu;
        // 0x29f1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F1D4u;
label_29f1d4:
    // 0x29f1d4: 0x0  nop
    ctx->pc = 0x29f1d4u;
    // NOP
label_29f1d8:
    // 0x29f1d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29f1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29f1dc:
    // 0x29f1dc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x29f1dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f1e0:
    // 0x29f1e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29f1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29f1e4:
    // 0x29f1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29f1e8:
    // 0x29f1e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29f1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f1ec:
    // 0x29f1ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29f1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29f1f0:
    // 0x29f1f0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29f1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29f1f4:
    // 0x29f1f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29f1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29f1f8:
    // 0x29f1f8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x29f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_29f1fc:
    // 0x29f1fc: 0x4410043  bgez        $v0, . + 4 + (0x43 << 2)
label_29f200:
    if (ctx->pc == 0x29F200u) {
        ctx->pc = 0x29F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1FCu;
        // 0x29f200: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F204u;
        goto label_29f204;
    }
    ctx->pc = 0x29F1FCu;
    {
        const bool branch_taken_0x29f1fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x29F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F1FCu;
        // 0x29f200: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f1fc) {
            ctx->pc = 0x29F30Cu;
            goto label_29f30c;
        }
    }
    ctx->pc = 0x29F204u;
label_29f204:
    // 0x29f204: 0x36020002  ori         $v0, $s0, 0x2
    ctx->pc = 0x29f204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_29f208:
    // 0x29f208: 0x32030008  andi        $v1, $s0, 0x8
    ctx->pc = 0x29f208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_29f20c:
    // 0x29f20c: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x29f20cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2));
label_29f210:
    // 0x29f210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29f210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29f214:
    // 0x29f214: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x29f214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_29f218:
    // 0x29f218: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_29f21c:
    if (ctx->pc == 0x29F21Cu) {
        ctx->pc = 0x29F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F218u;
        // 0x29f21c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F220u;
        goto label_29f220;
    }
    ctx->pc = 0x29F218u;
    {
        const bool branch_taken_0x29f218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x29F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F218u;
        // 0x29f21c: 0x32020002  andi        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f218) {
            ctx->pc = 0x29F22Cu;
            goto label_29f22c;
        }
    }
    ctx->pc = 0x29F220u;
label_29f220:
    // 0x29f220: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f224:
    // 0x29f224: 0x1000000b  b           . + 4 + (0xB << 2)
label_29f228:
    if (ctx->pc == 0x29F228u) {
        ctx->pc = 0x29F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F224u;
        // 0x29f228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F22Cu;
        goto label_29f22c;
    }
    ctx->pc = 0x29F224u;
    {
        const bool branch_taken_0x29f224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F224u;
        // 0x29f228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f224) {
            ctx->pc = 0x29F254u;
            goto label_29f254;
        }
    }
    ctx->pc = 0x29F22Cu;
label_29f22c:
    // 0x29f22c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f230:
    if (ctx->pc == 0x29F230u) {
        ctx->pc = 0x29F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F22Cu;
        // 0x29f230: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F234u;
        goto label_29f234;
    }
    ctx->pc = 0x29F22Cu;
    {
        const bool branch_taken_0x29f22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F22Cu;
        // 0x29f230: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f22c) {
            ctx->pc = 0x29F23Cu;
            goto label_29f23c;
        }
    }
    ctx->pc = 0x29F234u;
label_29f234:
    // 0x29f234: 0x10000007  b           . + 4 + (0x7 << 2)
label_29f238:
    if (ctx->pc == 0x29F238u) {
        ctx->pc = 0x29F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F234u;
        // 0x29f238: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F23Cu;
        goto label_29f23c;
    }
    ctx->pc = 0x29F234u;
    {
        const bool branch_taken_0x29f234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F234u;
        // 0x29f238: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f234) {
            ctx->pc = 0x29F254u;
            goto label_29f254;
        }
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x29f23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_29f240:
    // 0x29f240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f244:
    if (ctx->pc == 0x29F244u) {
        ctx->pc = 0x29F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F240u;
        // 0x29f244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F248u;
        goto label_29f248;
    }
    ctx->pc = 0x29F240u;
    {
        const bool branch_taken_0x29f240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F240u;
        // 0x29f244: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f240) {
            ctx->pc = 0x29F250u;
            goto label_29f250;
        }
    }
    ctx->pc = 0x29F248u;
label_29f248:
    // 0x29f248: 0x10000002  b           . + 4 + (0x2 << 2)
label_29f24c:
    if (ctx->pc == 0x29F24Cu) {
        ctx->pc = 0x29F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F248u;
        // 0x29f24c: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F250u;
        goto label_29f250;
    }
    ctx->pc = 0x29F248u;
    {
        const bool branch_taken_0x29f248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F248u;
        // 0x29f24c: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f248) {
            ctx->pc = 0x29F254u;
            goto label_29f254;
        }
    }
    ctx->pc = 0x29F250u;
label_29f250:
    // 0x29f250: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x29f250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_29f254:
    // 0x29f254: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x29f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_29f258:
    // 0x29f258: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_29f25c:
    if (ctx->pc == 0x29F25Cu) {
        ctx->pc = 0x29F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F258u;
        // 0x29f25c: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F260u;
        goto label_29f260;
    }
    ctx->pc = 0x29F258u;
    {
        const bool branch_taken_0x29f258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F258u;
        // 0x29f25c: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f258) {
            ctx->pc = 0x29F264u;
            goto label_29f264;
        }
    }
    ctx->pc = 0x29F260u;
label_29f260:
    // 0x29f260: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_29f264:
    // 0x29f264: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x29f264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_29f268:
    // 0x29f268: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_29f26c:
    if (ctx->pc == 0x29F26Cu) {
        ctx->pc = 0x29F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F268u;
        // 0x29f26c: 0x34840400  ori         $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F270u;
        goto label_29f270;
    }
    ctx->pc = 0x29F268u;
    {
        const bool branch_taken_0x29f268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f268) {
            ctx->pc = 0x29F26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29F268u;
            // 0x29f26c: 0x34840400  ori         $a0, $a0, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F280u;
            goto label_29f280;
        }
    }
    ctx->pc = 0x29F270u;
label_29f270:
    // 0x29f270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f274:
    // 0x29f274: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_29f278:
    if (ctx->pc == 0x29F278u) {
        ctx->pc = 0x29F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F274u;
        // 0x29f278: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F27Cu;
        goto label_29f27c;
    }
    ctx->pc = 0x29F274u;
    {
        const bool branch_taken_0x29f274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F274u;
        // 0x29f278: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f274) {
            ctx->pc = 0x29F284u;
            goto label_29f284;
        }
    }
    ctx->pc = 0x29F27Cu;
label_29f27c:
    // 0x29f27c: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x29f27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
label_29f280:
    // 0x29f280: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x29f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_29f284:
    // 0x29f284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f288:
    if (ctx->pc == 0x29F288u) {
        ctx->pc = 0x29F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F284u;
        // 0x29f288: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F28Cu;
        goto label_29f28c;
    }
    ctx->pc = 0x29F284u;
    {
        const bool branch_taken_0x29f284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F284u;
        // 0x29f288: 0x32020020  andi        $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f284) {
            ctx->pc = 0x29F294u;
            goto label_29f294;
        }
    }
    ctx->pc = 0x29F28Cu;
label_29f28c:
    // 0x29f28c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x29f28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_29f290:
    // 0x29f290: 0x36521000  ori         $s2, $s2, 0x1000
    ctx->pc = 0x29f290u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4096);
label_29f294:
    // 0x29f294: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_29f298:
    if (ctx->pc == 0x29F298u) {
        ctx->pc = 0x29F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F294u;
        // 0x29f298: 0x34850800  ori         $a1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F29Cu;
        goto label_29f29c;
    }
    ctx->pc = 0x29F294u;
    {
        const bool branch_taken_0x29f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F294u;
        // 0x29f298: 0x34850800  ori         $a1, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f294) {
            ctx->pc = 0x29F2ACu;
            goto label_29f2ac;
        }
    }
    ctx->pc = 0x29F29Cu;
label_29f29c:
    // 0x29f29c: 0x34830200  ori         $v1, $a0, 0x200
    ctx->pc = 0x29f29cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
label_29f2a0:
    // 0x29f2a0: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x29f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_29f2a4:
    // 0x29f2a4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x29f2a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_29f2a8:
    // 0x29f2a8: 0x34850800  ori         $a1, $a0, 0x800
    ctx->pc = 0x29f2a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
label_29f2ac:
    // 0x29f2ac: 0x32020040  andi        $v0, $s0, 0x40
    ctx->pc = 0x29f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_29f2b0:
    // 0x29f2b0: 0x82280a  movz        $a1, $a0, $v0
    ctx->pc = 0x29f2b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4));
label_29f2b4:
    // 0x29f2b4: 0xc0c8678  jal         func_3219E0
label_29f2b8:
    if (ctx->pc == 0x29F2B8u) {
        ctx->pc = 0x29F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2B4u;
        // 0x29f2b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2BCu;
        goto label_29f2bc;
    }
    ctx->pc = 0x29F2B4u;
    SET_GPR_U32(ctx, 31, 0x29F2BCu);
    ctx->pc = 0x29F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2B4u;
    // 0x29f2b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3219E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3219E0u, 0x29F2B4u, 0x29F2BCu)) {
        return;
    }
    ctx->pc = 0x29F2BCu;
label_29f2bc:
    // 0x29f2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f2c0:
    // 0x29f2c0: 0x4800017  bltz        $a0, . + 4 + (0x17 << 2)
label_29f2c4:
    if (ctx->pc == 0x29F2C4u) {
        ctx->pc = 0x29F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C0u;
        // 0x29f2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2C8u;
        goto label_29f2c8;
    }
    ctx->pc = 0x29F2C0u;
    {
        const bool branch_taken_0x29f2c0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x29F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C0u;
        // 0x29f2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2c0) {
            ctx->pc = 0x29F320u;
            goto label_29f320;
        }
    }
    ctx->pc = 0x29F2C8u;
label_29f2c8:
    // 0x29f2c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29f2cc:
    // 0x29f2cc: 0x2403eff3  addiu       $v1, $zero, -0x100D
    ctx->pc = 0x29f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963187));
label_29f2d0:
    // 0x29f2d0: 0x3245100c  andi        $a1, $s2, 0x100C
    ctx->pc = 0x29f2d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4108);
label_29f2d4:
    // 0x29f2d4: 0xae240038  sw          $a0, 0x38($s1)
    ctx->pc = 0x29f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
label_29f2d8:
    // 0x29f2d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29f2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29f2dc:
    // 0x29f2dc: 0x3204000c  andi        $a0, $s0, 0xC
    ctx->pc = 0x29f2dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12);
label_29f2e0:
    // 0x29f2e0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29f2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_29f2e4:
    // 0x29f2e4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_29f2e8:
    if (ctx->pc == 0x29F2E8u) {
        ctx->pc = 0x29F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2E4u;
        // 0x29f2e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2ECu;
        goto label_29f2ec;
    }
    ctx->pc = 0x29F2E4u;
    {
        const bool branch_taken_0x29f2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2E4u;
        // 0x29f2e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2e4) {
            ctx->pc = 0x29F314u;
            goto label_29f314;
        }
    }
    ctx->pc = 0x29F2ECu;
label_29f2ec:
    // 0x29f2ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f2f0:
    // 0x29f2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f2f4:
    // 0x29f2f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29f2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f2f8:
    // 0x29f2f8: 0xc0a7a02  jal         func_29E808
label_29f2fc:
    if (ctx->pc == 0x29F2FCu) {
        ctx->pc = 0x29F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2F8u;
        // 0x29f2fc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F300u;
        goto label_29f300;
    }
    ctx->pc = 0x29F2F8u;
    SET_GPR_U32(ctx, 31, 0x29F300u);
    ctx->pc = 0x29F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2F8u;
    // 0x29f2fc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E808u, 0x29F2F8u, 0x29F300u)) {
        return;
    }
    ctx->pc = 0x29F300u;
label_29f300:
    // 0x29f300: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29f304:
    // 0x29f304: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_29f308:
    if (ctx->pc == 0x29F308u) {
        ctx->pc = 0x29F30Cu;
        goto label_29f30c;
    }
    ctx->pc = 0x29F304u;
    {
        const bool branch_taken_0x29f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29f304) {
            ctx->pc = 0x29F314u;
            goto label_29f314;
        }
    }
    ctx->pc = 0x29F30Cu;
label_29f30c:
    // 0x29f30c: 0x10000004  b           . + 4 + (0x4 << 2)
label_29f310:
    if (ctx->pc == 0x29F310u) {
        ctx->pc = 0x29F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F30Cu;
        // 0x29f310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F314u;
        goto label_29f314;
    }
    ctx->pc = 0x29F30Cu;
    {
        const bool branch_taken_0x29f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F30Cu;
        // 0x29f310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f30c) {
            ctx->pc = 0x29F320u;
            goto label_29f320;
        }
    }
    ctx->pc = 0x29F314u;
label_29f314:
    // 0x29f314: 0xc0a7188  jal         func_29C620
label_29f318:
    if (ctx->pc == 0x29F318u) {
        ctx->pc = 0x29F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F314u;
        // 0x29f318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F31Cu;
        goto label_29f31c;
    }
    ctx->pc = 0x29F314u;
    SET_GPR_U32(ctx, 31, 0x29F31Cu);
    ctx->pc = 0x29F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F314u;
    // 0x29f318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C620u, 0x29F314u, 0x29F31Cu)) {
        return;
    }
    ctx->pc = 0x29F31Cu;
label_29f31c:
    // 0x29f31c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29f31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f320:
    // 0x29f320: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29f320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29f324:
    // 0x29f324: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29f324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29f328:
    // 0x29f328: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29f328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f32c:
    // 0x29f32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f330:
    // 0x29f330: 0x3e00008  jr          $ra
label_29f334:
    if (ctx->pc == 0x29F334u) {
        ctx->pc = 0x29F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F330u;
        // 0x29f334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F338u;
        goto label_fallthrough_0x29f330;
    }
    ctx->pc = 0x29F330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F330u;
        // 0x29f334: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f330:
    ctx->pc = 0x29F338u;
}
