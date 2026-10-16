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

// Function: sub_0016BF88
// Address: 0x16bf88 - 0x16c008
void sub_0016BF88_0x16bf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF88_0x16bf88");
#endif

    switch (ctx->pc) {
        case 0x16bfb0u: goto label_16bfb0;
        case 0x16bfd4u: goto label_16bfd4;
        case 0x16bfecu: goto label_16bfec;
        default: break;
    }

    ctx->pc = 0x16bf88u;

    // 0x16bf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bf8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16bf90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16bf94: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16BF94u;
    {
        const bool branch_taken_0x16bf94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16BF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF94u;
        // 0x16bf98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf94) {
            ctx->pc = 0x16BFECu;
            goto label_16bfec;
        }
    }
    ctx->pc = 0x16BF9Cu;
    // 0x16bf9c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16BF9Cu;
    {
        const bool branch_taken_0x16bf9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF9Cu;
        // 0x16bfa0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf9c) {
            ctx->pc = 0x16BFDCu;
            goto label_16bfdc;
        }
    }
    ctx->pc = 0x16BFA4u;
    // 0x16bfa4: 0x26104940  addiu       $s0, $s0, 0x4940
    ctx->pc = 0x16bfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18752));
    // 0x16bfa8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16BFA8u;
    SET_GPR_U32(ctx, 31, 0x16BFB0u);
    ctx->pc = 0x16BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFA8u;
    // 0x16bfac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16BFA8u, 0x16BFB0u)) {
        return;
    }
    ctx->pc = 0x16BFB0u;
label_16bfb0:
    // 0x16bfb0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16bfb4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16bfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16bfb8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16bfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16bfbc: 0xac62f688  sw          $v0, -0x978($v1)
    ctx->pc = 0x16bfbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF688u, _value); } while (0);
    // 0x16bfc0: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x16bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    // 0x16bfc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16bfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bfc8: 0x24c6c008  addiu       $a2, $a2, -0x3FF8
    ctx->pc = 0x16bfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950920));
    // 0x16bfcc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16BFCCu;
    SET_GPR_U32(ctx, 31, 0x16BFD4u);
    ctx->pc = 0x16BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFCCu;
    // 0x16bfd0: 0x24070054  addiu       $a3, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16BFCCu, 0x16BFD4u)) {
        return;
    }
    ctx->pc = 0x16BFD4u;
label_16bfd4:
    // 0x16bfd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16BFD4u;
    {
        const bool branch_taken_0x16bfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFD4u;
        // 0x16bfd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bfd4) {
            ctx->pc = 0x16BFF0u;
            goto label_16bff0;
        }
    }
    ctx->pc = 0x16BFDCu;
label_16bfdc:
    // 0x16bfdc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16bfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16bfe0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bfe4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16BFE4u;
    SET_GPR_U32(ctx, 31, 0x16BFECu);
    ctx->pc = 0x16BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BFE4u;
    // 0x16bfe8: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16BFE4u, 0x16BFECu)) {
        return;
    }
    ctx->pc = 0x16BFECu;
label_16bfec:
    // 0x16bfec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16bfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16bff0:
    // 0x16bff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bff4: 0x3e00008  jr          $ra
    ctx->pc = 0x16BFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BFF4u;
        // 0x16bff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BFFCu;
    // 0x16bffc: 0x0  nop
    ctx->pc = 0x16bffcu;
    // NOP
    // 0x16c000: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16c000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16c004: 0x0  nop
    ctx->pc = 0x16c004u;
    // NOP
    ctx->pc = 0x16c008u;
}
