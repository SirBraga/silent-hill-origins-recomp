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

// Function: sub_0016EF98
// Address: 0x16ef98 - 0x16f008
void sub_0016EF98_0x16ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EF98_0x16ef98");
#endif

    switch (ctx->pc) {
        case 0x16efacu: goto label_16efac;
        case 0x16efccu: goto label_16efcc;
        case 0x16efd4u: goto label_16efd4;
        default: break;
    }

    ctx->pc = 0x16ef98u;

    // 0x16ef98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ef9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ef9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16efa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16efa4: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16EFA4u;
    SET_GPR_U32(ctx, 31, 0x16EFACu);
    ctx->pc = 0x16EFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFA4u;
    // 0x16efa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16EFA4u, 0x16EFACu)) {
        return;
    }
    ctx->pc = 0x16EFACu;
label_16efac:
    // 0x16efac: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16efacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16efb0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16efb4: 0x24635068  addiu       $v1, $v1, 0x5068
    ctx->pc = 0x16efb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20584));
    // 0x16efb8: 0x24425020  addiu       $v0, $v0, 0x5020
    ctx->pc = 0x16efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20512));
    // 0x16efbc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16efc0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16efc4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16EFC4u;
    SET_GPR_U32(ctx, 31, 0x16EFCCu);
    ctx->pc = 0x16EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFC4u;
    // 0x16efc8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16EFC4u, 0x16EFCCu)) {
        return;
    }
    ctx->pc = 0x16EFCCu;
label_16efcc:
    // 0x16efcc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16EFCCu;
    SET_GPR_U32(ctx, 31, 0x16EFD4u);
    ctx->pc = 0x16EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EFCCu;
    // 0x16efd0: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16EFCCu, 0x16EFD4u)) {
        return;
    }
    ctx->pc = 0x16EFD4u;
label_16efd4:
    // 0x16efd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16efd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16efd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16efd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16efdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16efdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16efe0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16efe4: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x16efe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x16efe8: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x16efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x16efec: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16efecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16eff0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x16eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x16eff4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16eff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16eff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16effc: 0x3e00008  jr          $ra
    ctx->pc = 0x16EFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EFFCu;
        // 0x16f000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F004u;
    // 0x16f004: 0x0  nop
    ctx->pc = 0x16f004u;
    // NOP
    ctx->pc = 0x16f008u;
}
