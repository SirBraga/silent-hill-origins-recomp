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

// Function: sub_00289BF8
// Address: 0x289bf8 - 0x289c98
void sub_00289BF8_0x289bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289BF8_0x289bf8");
#endif

    switch (ctx->pc) {
        case 0x289c28u: goto label_289c28;
        case 0x289c30u: goto label_289c30;
        case 0x289c5cu: goto label_289c5c;
        case 0x289c78u: goto label_289c78;
        case 0x289c80u: goto label_289c80;
        default: break;
    }

    ctx->pc = 0x289bf8u;

    // 0x289bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x289bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x289bfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x289bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x289c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x289c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c08: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x289c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x289c0c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x289c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x289c10: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x289C10u;
    {
        const bool branch_taken_0x289c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C10u;
        // 0x289c14: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c10) {
            ctx->pc = 0x289C80u;
            goto label_289c80;
        }
    }
    ctx->pc = 0x289C18u;
    // 0x289c18: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x289C18u;
    {
        const bool branch_taken_0x289c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c18) {
            ctx->pc = 0x289C70u;
            goto label_289c70;
        }
    }
    ctx->pc = 0x289C20u;
    // 0x289c20: 0xc0a1d5c  jal         func_287570
    ctx->pc = 0x289C20u;
    SET_GPR_U32(ctx, 31, 0x289C28u);
    ctx->pc = 0x289C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C20u;
    // 0x289c24: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287570u, 0x289C20u, 0x289C28u)) {
        return;
    }
    ctx->pc = 0x289C28u;
label_289c28:
    // 0x289c28: 0xc0a1e48  jal         func_287920
    ctx->pc = 0x289C28u;
    SET_GPR_U32(ctx, 31, 0x289C30u);
    ctx->pc = 0x287920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287920u, 0x289C28u, 0x289C30u)) {
        return;
    }
    ctx->pc = 0x289C30u;
label_289c30:
    // 0x289c30: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x289c30u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289c34: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x289c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x289c38: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x289c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x289c3c: 0x7e060050  sq          $a2, 0x50($s0)
    ctx->pc = 0x289c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 6));
    // 0x289c40: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x289c40u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x289c44: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x289c44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
    // 0x289c48: 0x78460020  lq          $a2, 0x20($v0)
    ctx->pc = 0x289c48u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x289c4c: 0x7e060070  sq          $a2, 0x70($s0)
    ctx->pc = 0x289c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 6));
    // 0x289c50: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x289c50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x289c54: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x289C54u;
    SET_GPR_U32(ctx, 31, 0x289C5Cu);
    ctx->pc = 0x289C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C54u;
    // 0x289c58: 0x7e030080  sq          $v1, 0x80($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x289C54u, 0x289C5Cu)) {
        return;
    }
    ctx->pc = 0x289C5Cu;
label_289c5c:
    // 0x289c5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x289c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x289c60: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x289c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x289c64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289c68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x289C68u;
    {
        const bool branch_taken_0x289c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C68u;
        // 0x289c6c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289c68) {
            ctx->pc = 0x289C78u;
            goto label_289c78;
        }
    }
    ctx->pc = 0x289C70u;
label_289c70:
    // 0x289c70: 0xc0a1e14  jal         func_287850
    ctx->pc = 0x289C70u;
    SET_GPR_U32(ctx, 31, 0x289C78u);
    ctx->pc = 0x289C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289C70u;
    // 0x289c74: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287850u, 0x289C70u, 0x289C78u)) {
        return;
    }
    ctx->pc = 0x289C78u;
label_289c78:
    // 0x289c78: 0xc0a1e06  jal         func_287818
    ctx->pc = 0x289C78u;
    SET_GPR_U32(ctx, 31, 0x289C80u);
    ctx->pc = 0x287818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x287818u, 0x289C78u, 0x289C80u)) {
        return;
    }
    ctx->pc = 0x289C80u;
label_289c80:
    // 0x289c80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289c88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x289c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x289C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289C8Cu;
        // 0x289c90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289C94u;
    // 0x289c94: 0x0  nop
    ctx->pc = 0x289c94u;
    // NOP
    ctx->pc = 0x289c98u;
}
