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

// Function: sub_00289AF0
// Address: 0x289af0 - 0x289b68
void sub_00289AF0_0x289af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289AF0_0x289af0");
#endif

    switch (ctx->pc) {
        case 0x289b0cu: goto label_289b0c;
        case 0x289b34u: goto label_289b34;
        case 0x289b48u: goto label_289b48;
        default: break;
    }

    ctx->pc = 0x289af0u;

    // 0x289af0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x289af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x289af4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x289af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x289af8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x289af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x289afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289b04: 0xc0a228a  jal         func_288A28
    ctx->pc = 0x289B04u;
    SET_GPR_U32(ctx, 31, 0x289B0Cu);
    ctx->pc = 0x289B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B04u;
    // 0x289b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288A28u, 0x289B04u, 0x289B0Cu)) {
        return;
    }
    ctx->pc = 0x289B0Cu;
label_289b0c:
    // 0x289b0c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x289b10: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x289b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x289b14: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x289b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x289b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b1c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x289b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x289b20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289b24: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x289b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x289b28: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x289b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x289b2c: 0xc09270a  jal         func_249C28
    ctx->pc = 0x289B2Cu;
    SET_GPR_U32(ctx, 31, 0x289B34u);
    ctx->pc = 0x289B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B2Cu;
    // 0x289b30: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x289B2Cu, 0x289B34u)) {
        return;
    }
    ctx->pc = 0x289B34u;
label_289b34:
    // 0x289b34: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289B34u;
    {
        const bool branch_taken_0x289b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289b34) {
            ctx->pc = 0x289B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289B34u;
            // 0x289b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289B50u;
            goto label_289b50;
        }
    }
    ctx->pc = 0x289B3Cu;
    // 0x289b3c: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x289b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x289b40: 0xc0a244c  jal         func_289130
    ctx->pc = 0x289B40u;
    SET_GPR_U32(ctx, 31, 0x289B48u);
    ctx->pc = 0x289B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289B40u;
    // 0x289b44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289130u, 0x289B40u, 0x289B48u)) {
        return;
    }
    ctx->pc = 0x289B48u;
label_289b48:
    // 0x289b48: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x289b48u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x289b4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_289b50:
    // 0x289b50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x289b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289b54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x289b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x289b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x289B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289B5Cu;
        // 0x289b60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289B64u;
    // 0x289b64: 0x0  nop
    ctx->pc = 0x289b64u;
    // NOP
    ctx->pc = 0x289b68u;
}
