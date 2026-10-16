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

// Function: sub_0016DE58
// Address: 0x16de58 - 0x16deb8
void sub_0016DE58_0x16de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DE58_0x16de58");
#endif

    switch (ctx->pc) {
        case 0x16de6cu: goto label_16de6c;
        case 0x16de8cu: goto label_16de8c;
        case 0x16de94u: goto label_16de94;
        default: break;
    }

    ctx->pc = 0x16de58u;

    // 0x16de58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16de58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16de5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16de60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16de60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16de64: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16DE64u;
    SET_GPR_U32(ctx, 31, 0x16DE6Cu);
    ctx->pc = 0x16DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE64u;
    // 0x16de68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16DE64u, 0x16DE6Cu)) {
        return;
    }
    ctx->pc = 0x16DE6Cu;
label_16de6c:
    // 0x16de6c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16de70: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16de70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16de74: 0x24634e08  addiu       $v1, $v1, 0x4E08
    ctx->pc = 0x16de74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19976));
    // 0x16de78: 0x24424dc0  addiu       $v0, $v0, 0x4DC0
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
    // 0x16de7c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16de7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16de80: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16de84: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16DE84u;
    SET_GPR_U32(ctx, 31, 0x16DE8Cu);
    ctx->pc = 0x16DE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE84u;
    // 0x16de88: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16DE84u, 0x16DE8Cu)) {
        return;
    }
    ctx->pc = 0x16DE8Cu;
label_16de8c:
    // 0x16de8c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16DE8Cu;
    SET_GPR_U32(ctx, 31, 0x16DE94u);
    ctx->pc = 0x16DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE8Cu;
    // 0x16de90: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16DE8Cu, 0x16DE94u)) {
        return;
    }
    ctx->pc = 0x16DE94u;
label_16de94:
    // 0x16de94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16de94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de98: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16de98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16de9c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x16de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x16dea0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x16dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x16dea4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16dea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16deac: 0x3e00008  jr          $ra
    ctx->pc = 0x16DEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEACu;
        // 0x16deb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DEB4u;
    // 0x16deb4: 0x0  nop
    ctx->pc = 0x16deb4u;
    // NOP
    ctx->pc = 0x16deb8u;
}
