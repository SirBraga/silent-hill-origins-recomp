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

// Function: sub_002B2A38
// Address: 0x2b2a38 - 0x2b2aa8
void sub_002B2A38_0x2b2a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2A38_0x2b2a38");
#endif

    switch (ctx->pc) {
        case 0x2b2a38u: goto label_2b2a38;
        case 0x2b2a3cu: goto label_2b2a3c;
        case 0x2b2a40u: goto label_2b2a40;
        case 0x2b2a44u: goto label_2b2a44;
        case 0x2b2a48u: goto label_2b2a48;
        case 0x2b2a4cu: goto label_2b2a4c;
        case 0x2b2a50u: goto label_2b2a50;
        case 0x2b2a54u: goto label_2b2a54;
        case 0x2b2a58u: goto label_2b2a58;
        case 0x2b2a5cu: goto label_2b2a5c;
        case 0x2b2a60u: goto label_2b2a60;
        case 0x2b2a64u: goto label_2b2a64;
        case 0x2b2a68u: goto label_2b2a68;
        case 0x2b2a6cu: goto label_2b2a6c;
        case 0x2b2a70u: goto label_2b2a70;
        case 0x2b2a74u: goto label_2b2a74;
        case 0x2b2a78u: goto label_2b2a78;
        case 0x2b2a7cu: goto label_2b2a7c;
        case 0x2b2a80u: goto label_2b2a80;
        case 0x2b2a84u: goto label_2b2a84;
        case 0x2b2a88u: goto label_2b2a88;
        case 0x2b2a8cu: goto label_2b2a8c;
        case 0x2b2a90u: goto label_2b2a90;
        case 0x2b2a94u: goto label_2b2a94;
        case 0x2b2a98u: goto label_2b2a98;
        case 0x2b2a9cu: goto label_2b2a9c;
        case 0x2b2aa0u: goto label_2b2aa0;
        case 0x2b2aa4u: goto label_2b2aa4;
        default: break;
    }

    ctx->pc = 0x2b2a38u;

label_2b2a38:
    // 0x2b2a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b2a3c:
    // 0x2b2a3c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2b2a40:
    // 0x2b2a40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b2a44:
    // 0x2b2a44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2b2a48:
    // 0x2b2a48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b2a48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a4c:
    // 0x2b2a4c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2b2a50:
    // 0x2b2a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a54:
    // 0x2b2a54: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2b2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2b2a58:
    // 0x2b2a58: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2b2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2b2a5c:
    // 0x2b2a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b2a60:
    // 0x2b2a60: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b2a60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2b2a64:
    // 0x2b2a64: 0x24040424  addiu       $a0, $zero, 0x424
    ctx->pc = 0x2b2a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1060));
label_2b2a68:
    // 0x2b2a68: 0x40f809  jalr        $v0
label_2b2a6c:
    if (ctx->pc == 0x2B2A6Cu) {
        ctx->pc = 0x2B2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A68u;
        // 0x2b2a6c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A70u;
        goto label_2b2a70;
    }
    ctx->pc = 0x2B2A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2A70u);
        ctx->pc = 0x2B2A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A68u;
        // 0x2b2a6c: 0x34a50900  ori         $a1, $a1, 0x900 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A68u, 0x2B2A70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2A70u;
label_2b2a70:
    // 0x2b2a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b2a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a74:
    // 0x2b2a74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b2a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b2a78:
    // 0x2b2a78: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b2a78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2b2a7c:
    // 0x2b2a7c: 0xc0ab9c8  jal         func_2AE720
label_2b2a80:
    if (ctx->pc == 0x2B2A80u) {
        ctx->pc = 0x2B2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A7Cu;
        // 0x2b2a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A84u;
        goto label_2b2a84;
    }
    ctx->pc = 0x2B2A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B2A84u);
    ctx->pc = 0x2B2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2A7Cu;
    // 0x2b2a80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE720u, 0x2B2A7Cu, 0x2B2A84u)) {
        return;
    }
    ctx->pc = 0x2B2A84u;
label_2b2a84:
    // 0x2b2a84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b2a88:
    // 0x2b2a88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b2a8c:
    // 0x2b2a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b2a90:
    // 0x2b2a90: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b2a94:
    // 0x2b2a94: 0x3e00008  jr          $ra
label_2b2a98:
    if (ctx->pc == 0x2B2A98u) {
        ctx->pc = 0x2B2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A94u;
        // 0x2b2a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A9Cu;
        goto label_2b2a9c;
    }
    ctx->pc = 0x2B2A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A94u;
        // 0x2b2a98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A9Cu;
label_2b2a9c:
    // 0x2b2a9c: 0x0  nop
    ctx->pc = 0x2b2a9cu;
    // NOP
label_2b2aa0:
    // 0x2b2aa0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b2aa4:
    // 0x2b2aa4: 0x0  nop
    ctx->pc = 0x2b2aa4u;
    // NOP
    ctx->pc = 0x2b2aa8u;
}
