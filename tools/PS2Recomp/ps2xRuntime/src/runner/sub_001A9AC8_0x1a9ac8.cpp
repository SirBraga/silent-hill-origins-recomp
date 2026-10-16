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

// Function: sub_001A9AC8
// Address: 0x1a9ac8 - 0x1a9b50
void sub_001A9AC8_0x1a9ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9AC8_0x1a9ac8");
#endif

    switch (ctx->pc) {
        case 0x1a9b10u: goto label_1a9b10;
        default: break;
    }

    ctx->pc = 0x1a9ac8u;

    // 0x1a9ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a9acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a9ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a9ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a9adc: 0x24900004  addiu       $s0, $a0, 0x4
    ctx->pc = 0x1a9adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a9ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9ae4: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1a9ae8: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x1a9ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a9aec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a9af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9af4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a9af8: 0x2446fffc  addiu       $a2, $v0, -0x4
    ctx->pc = 0x1a9af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1a9afc: 0x8c47fffc  lw          $a3, -0x4($v0)
    ctx->pc = 0x1a9afcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x1a9b00: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x1a9b00u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1a9b04: 0xac51fffc  sw          $s1, -0x4($v0)
    ctx->pc = 0x1a9b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 17));
    // 0x1a9b08: 0xc06a708  jal         func_1A9C20
    ctx->pc = 0x1A9B08u;
    SET_GPR_U32(ctx, 31, 0x1A9B10u);
    ctx->pc = 0x1A9B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9B08u;
    // 0x1a9b0c: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9C20u, 0x1A9B08u, 0x1A9B10u)) {
        return;
    }
    ctx->pc = 0x1A9B10u;
label_1a9b10:
    // 0x1a9b10: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1a9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1a9b14: 0x2c620080  sltiu       $v0, $v1, 0x80
    ctx->pc = 0x1a9b14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1a9b18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A9B18u;
    {
        const bool branch_taken_0x1a9b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B18u;
        // 0x1a9b1c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b18) {
            ctx->pc = 0x1A9B2Cu;
            goto label_1a9b2c;
        }
    }
    ctx->pc = 0x1A9B20u;
    // 0x1a9b20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a9b24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a9b28: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1a9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
label_1a9b2c:
    // 0x1a9b2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a9b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9b34: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9b3c: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x1a9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x1a9b40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a9b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9b44: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B44u;
        // 0x1a9b48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B4Cu;
    // 0x1a9b4c: 0x0  nop
    ctx->pc = 0x1a9b4cu;
    // NOP
    ctx->pc = 0x1a9b50u;
}
