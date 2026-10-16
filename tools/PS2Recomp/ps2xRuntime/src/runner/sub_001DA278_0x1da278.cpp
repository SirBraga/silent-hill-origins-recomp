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

// Function: sub_001DA278
// Address: 0x1da278 - 0x1da310
void sub_001DA278_0x1da278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA278_0x1da278");
#endif

    switch (ctx->pc) {
        case 0x1da278u: goto label_1da278;
        case 0x1da27cu: goto label_1da27c;
        case 0x1da280u: goto label_1da280;
        case 0x1da284u: goto label_1da284;
        case 0x1da288u: goto label_1da288;
        case 0x1da28cu: goto label_1da28c;
        case 0x1da290u: goto label_1da290;
        case 0x1da294u: goto label_1da294;
        case 0x1da298u: goto label_1da298;
        case 0x1da29cu: goto label_1da29c;
        case 0x1da2a0u: goto label_1da2a0;
        case 0x1da2a4u: goto label_1da2a4;
        case 0x1da2a8u: goto label_1da2a8;
        case 0x1da2acu: goto label_1da2ac;
        case 0x1da2b0u: goto label_1da2b0;
        case 0x1da2b4u: goto label_1da2b4;
        case 0x1da2b8u: goto label_1da2b8;
        case 0x1da2bcu: goto label_1da2bc;
        case 0x1da2c0u: goto label_1da2c0;
        case 0x1da2c4u: goto label_1da2c4;
        case 0x1da2c8u: goto label_1da2c8;
        case 0x1da2ccu: goto label_1da2cc;
        case 0x1da2d0u: goto label_1da2d0;
        case 0x1da2d4u: goto label_1da2d4;
        case 0x1da2d8u: goto label_1da2d8;
        case 0x1da2dcu: goto label_1da2dc;
        case 0x1da2e0u: goto label_1da2e0;
        case 0x1da2e4u: goto label_1da2e4;
        case 0x1da2e8u: goto label_1da2e8;
        case 0x1da2ecu: goto label_1da2ec;
        case 0x1da2f0u: goto label_1da2f0;
        case 0x1da2f4u: goto label_1da2f4;
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da2fcu: goto label_1da2fc;
        case 0x1da300u: goto label_1da300;
        case 0x1da304u: goto label_1da304;
        case 0x1da308u: goto label_1da308;
        case 0x1da30cu: goto label_1da30c;
        default: break;
    }

    ctx->pc = 0x1da278u;

label_1da278:
    // 0x1da278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1da27c:
    // 0x1da27c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1da280:
    // 0x1da280: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1da280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1da284:
    // 0x1da284: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da288:
    // 0x1da288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1da288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1da28c:
    // 0x1da28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1da290:
    // 0x1da290: 0xc076642  jal         func_1D9908
label_1da294:
    if (ctx->pc == 0x1DA294u) {
        ctx->pc = 0x1DA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA290u;
        // 0x1da294: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA298u;
        goto label_1da298;
    }
    ctx->pc = 0x1DA290u;
    SET_GPR_U32(ctx, 31, 0x1DA298u);
    ctx->pc = 0x1DA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA290u;
    // 0x1da294: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x1DA290u, 0x1DA298u)) {
        return;
    }
    ctx->pc = 0x1DA298u;
label_1da298:
    // 0x1da298: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1da29c:
    // 0x1da29c: 0xc042b6e  jal         func_10ADB8
label_1da2a0:
    if (ctx->pc == 0x1DA2A0u) {
        ctx->pc = 0x1DA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA29Cu;
        // 0x1da2a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2A4u;
        goto label_1da2a4;
    }
    ctx->pc = 0x1DA29Cu;
    SET_GPR_U32(ctx, 31, 0x1DA2A4u);
    ctx->pc = 0x1DA2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA29Cu;
    // 0x1da2a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ADB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ADB8u, 0x1DA29Cu, 0x1DA2A4u)) {
        return;
    }
    ctx->pc = 0x1DA2A4u;
label_1da2a4:
    // 0x1da2a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1da2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da2a8:
    // 0x1da2a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da2ac:
    // 0x1da2ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da2acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da2b0:
    // 0x1da2b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1da2b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da2b4:
    // 0x1da2b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1da2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da2b8:
    // 0x1da2b8: 0xc0b720a  jal         func_2DC828
label_1da2bc:
    if (ctx->pc == 0x1DA2BCu) {
        ctx->pc = 0x1DA2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2B8u;
        // 0x1da2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2C0u;
        goto label_1da2c0;
    }
    ctx->pc = 0x1DA2B8u;
    SET_GPR_U32(ctx, 31, 0x1DA2C0u);
    ctx->pc = 0x1DA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2B8u;
    // 0x1da2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC828u, 0x1DA2B8u, 0x1DA2C0u)) {
        return;
    }
    ctx->pc = 0x1DA2C0u;
label_1da2c0:
    // 0x1da2c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1da2c4:
    // 0x1da2c4: 0xc042b6e  jal         func_10ADB8
label_1da2c8:
    if (ctx->pc == 0x1DA2C8u) {
        ctx->pc = 0x1DA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2C4u;
        // 0x1da2c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2CCu;
        goto label_1da2cc;
    }
    ctx->pc = 0x1DA2C4u;
    SET_GPR_U32(ctx, 31, 0x1DA2CCu);
    ctx->pc = 0x1DA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2C4u;
    // 0x1da2c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ADB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ADB8u, 0x1DA2C4u, 0x1DA2CCu)) {
        return;
    }
    ctx->pc = 0x1DA2CCu;
label_1da2cc:
    // 0x1da2cc: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x1da2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1da2d0:
    // 0x1da2d0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_1da2d4:
    // 0x1da2d4: 0xc041e86  jal         func_107A18
label_1da2d8:
    if (ctx->pc == 0x1DA2D8u) {
        ctx->pc = 0x1DA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2D4u;
        // 0x1da2d8: 0x24841a70  addiu       $a0, $a0, 0x1A70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2DCu;
        goto label_1da2dc;
    }
    ctx->pc = 0x1DA2D4u;
    SET_GPR_U32(ctx, 31, 0x1DA2DCu);
    ctx->pc = 0x1DA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2D4u;
    // 0x1da2d8: 0x24841a70  addiu       $a0, $a0, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x1DA2D4u, 0x1DA2DCu)) {
        return;
    }
    ctx->pc = 0x1DA2DCu;
label_1da2dc:
    // 0x1da2dc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1da2e0:
    // 0x1da2e0: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x1da2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_1da2e4:
    // 0x1da2e4: 0x40f809  jalr        $v0
label_1da2e8:
    if (ctx->pc == 0x1DA2E8u) {
        ctx->pc = 0x1DA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2E4u;
        // 0x1da2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA2ECu;
        goto label_1da2ec;
    }
    ctx->pc = 0x1DA2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA2ECu);
        ctx->pc = 0x1DA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2E4u;
        // 0x1da2e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA2E4u, 0x1DA2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA2ECu;
label_1da2ec:
    // 0x1da2ec: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x1da2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_1da2f0:
    // 0x1da2f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1da2f4:
    // 0x1da2f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1da2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1da2f8:
    // 0x1da2f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1da2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1da2fc:
    // 0x1da2fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1da2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1da300:
    // 0x1da300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da304:
    // 0x1da304: 0x3e00008  jr          $ra
label_1da308:
    if (ctx->pc == 0x1DA308u) {
        ctx->pc = 0x1DA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA304u;
        // 0x1da308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA30Cu;
        goto label_1da30c;
    }
    ctx->pc = 0x1DA304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA304u;
        // 0x1da308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA30Cu;
label_1da30c:
    // 0x1da30c: 0x0  nop
    ctx->pc = 0x1da30cu;
    // NOP
    ctx->pc = 0x1da310u;
}
