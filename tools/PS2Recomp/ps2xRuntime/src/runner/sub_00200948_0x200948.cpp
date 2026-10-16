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

// Function: sub_00200948
// Address: 0x200948 - 0x2009e8
void sub_00200948_0x200948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200948_0x200948");
#endif

    switch (ctx->pc) {
        case 0x200978u: goto label_200978;
        case 0x2009b8u: goto label_2009b8;
        default: break;
    }

    ctx->pc = 0x200948u;

    // 0x200948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20094c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x20094cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x200950: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x200950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200954: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x200954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x200958: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20095c: 0x24502cc0  addiu       $s0, $v0, 0x2CC0
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x200960: 0x24633800  addiu       $v1, $v1, 0x3800
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14336));
    // 0x200964: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702CC4u));
    // 0x200968: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x200968u;
    {
        const bool branch_taken_0x200968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200968u;
        // 0x20096c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200968) {
            ctx->pc = 0x2009D0u;
            goto label_2009d0;
        }
    }
    ctx->pc = 0x200970u;
    // 0x200970: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x200970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200974: 0x0  nop
    ctx->pc = 0x200974u;
    // NOP
label_200978:
    // 0x200978: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x200978u;
    {
        const bool branch_taken_0x200978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200978) {
            ctx->pc = 0x20097Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200978u;
            // 0x20097c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2009C8u;
            goto label_2009c8;
        }
    }
    ctx->pc = 0x200980u;
    // 0x200980: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x200980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x200984: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x200984u;
    {
        const bool branch_taken_0x200984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200984u;
        // 0x200988: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200984) {
            ctx->pc = 0x200994u;
            goto label_200994;
        }
    }
    ctx->pc = 0x20098Cu;
    // 0x20098c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20098Cu;
    {
        const bool branch_taken_0x20098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20098Cu;
        // 0x200990: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20098c) {
            ctx->pc = 0x200998u;
            goto label_200998;
        }
    }
    ctx->pc = 0x200994u;
label_200994:
    // 0x200994: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x200994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_200998:
    // 0x200998: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x200998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20099c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20099Cu;
    {
        const bool branch_taken_0x20099c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2009A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20099Cu;
        // 0x2009a0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20099c) {
            ctx->pc = 0x2009ACu;
            goto label_2009ac;
        }
    }
    ctx->pc = 0x2009A4u;
    // 0x2009a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2009A4u;
    {
        const bool branch_taken_0x2009a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009A4u;
        // 0x2009a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009a4) {
            ctx->pc = 0x2009B0u;
            goto label_2009b0;
        }
    }
    ctx->pc = 0x2009ACu;
label_2009ac:
    // 0x2009ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2009acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2009b0:
    // 0x2009b0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2009B0u;
    SET_GPR_U32(ctx, 31, 0x2009B8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2009B0u, 0x2009B8u)) {
        return;
    }
    ctx->pc = 0x2009B8u;
label_2009b8:
    // 0x2009b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2009bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2009bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2009c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2009c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2009c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2009c8:
    // 0x2009c8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2009C8u;
    {
        const bool branch_taken_0x2009c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2009c8) {
            ctx->pc = 0x2009CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2009C8u;
            // 0x2009cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200978;
        }
    }
    ctx->pc = 0x2009D0u;
label_2009d0:
    // 0x2009d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2009d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2009d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2009d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2009d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2009D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2009DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2009D8u;
        // 0x2009dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2009D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2009E0u;
    // 0x2009e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2009e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2009e4: 0x0  nop
    ctx->pc = 0x2009e4u;
    // NOP
    ctx->pc = 0x2009e8u;
}
