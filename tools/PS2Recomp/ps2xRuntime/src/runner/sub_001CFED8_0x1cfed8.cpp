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

// Function: sub_001CFED8
// Address: 0x1cfed8 - 0x1cff90
void sub_001CFED8_0x1cfed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFED8_0x1cfed8");
#endif

    switch (ctx->pc) {
        case 0x1cff2cu: goto label_1cff2c;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cff74u: goto label_1cff74;
        case 0x1cff7cu: goto label_1cff7c;
        default: break;
    }

    ctx->pc = 0x1cfed8u;

    // 0x1cfed8: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1cfedc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfee0: 0x8cc29a08  lw          $v0, -0x65F8($a2)
    ctx->pc = 0x1cfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339A08u));
    // 0x1cfee4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CFEE4u;
    {
        const bool branch_taken_0x1cfee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEE4u;
        // 0x1cfee8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfee4) {
            ctx->pc = 0x1CFF3Cu;
            goto label_1cff3c;
        }
    }
    ctx->pc = 0x1CFEECu;
    // 0x1cfeec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cfeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfef0: 0x14820023  bne         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CFEF0u;
    {
        const bool branch_taken_0x1cfef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEF0u;
        // 0x1cfef4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfef0) {
            ctx->pc = 0x1CFF80u;
            goto label_1cff80;
        }
    }
    ctx->pc = 0x1CFEF8u;
    // 0x1cfef8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1cfef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1cfefc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cff00: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1cff00u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1cff04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff08: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cff0c: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFF0Cu;
    {
        const bool branch_taken_0x1cff0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF0Cu;
        // 0x1cff10: 0xacc39a08  sw          $v1, -0x65F8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294941192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff0c) {
            ctx->pc = 0x1CFF2Cu;
            goto label_1cff2c;
        }
    }
    ctx->pc = 0x1CFF14u;
    // 0x1cff14: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cff18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFF18u;
    {
        const bool branch_taken_0x1cff18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF18u;
        // 0x1cff1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff18) {
            ctx->pc = 0x1CFF2Cu;
            goto label_1cff2c;
        }
    }
    ctx->pc = 0x1CFF20u;
    // 0x1cff20: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cff20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cff24: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CFF24u;
    SET_GPR_U32(ctx, 31, 0x1CFF2Cu);
    ctx->pc = 0x1CFF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF24u;
    // 0x1cff28: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CFF24u, 0x1CFF2Cu)) {
        return;
    }
    ctx->pc = 0x1CFF2Cu;
label_1cff2c:
    // 0x1cff2c: 0xc073f36  jal         func_1CFCD8
    ctx->pc = 0x1CFF2Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF34u);
    ctx->pc = 0x1CFCD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CFCD8u, 0x1CFF2Cu, 0x1CFF34u)) {
        return;
    }
    ctx->pc = 0x1CFF34u;
label_1cff34:
    // 0x1cff34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1CFF34u;
    {
        const bool branch_taken_0x1cff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF34u;
        // 0x1cff38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff34) {
            ctx->pc = 0x1CFF80u;
            goto label_1cff80;
        }
    }
    ctx->pc = 0x1CFF3Cu;
label_1cff3c:
    // 0x1cff3c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CFF3Cu;
    {
        const bool branch_taken_0x1cff3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF3Cu;
        // 0x1cff40: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff3c) {
            ctx->pc = 0x1CFF80u;
            goto label_1cff80;
        }
    }
    ctx->pc = 0x1CFF44u;
    // 0x1cff44: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1cff44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1cff48: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1cff4c: 0x8c4586c0  lw          $a1, -0x7940($v0)
    ctx->pc = 0x1cff4cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F86C0u));
    // 0x1cff50: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1cff50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1cff54: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFF54u;
    {
        const bool branch_taken_0x1cff54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cff54) {
            ctx->pc = 0x1CFF74u;
            goto label_1cff74;
        }
    }
    ctx->pc = 0x1CFF5Cu;
    // 0x1cff5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cff60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFF60u;
    {
        const bool branch_taken_0x1cff60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF60u;
        // 0x1cff64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff60) {
            ctx->pc = 0x1CFF74u;
            goto label_1cff74;
        }
    }
    ctx->pc = 0x1CFF68u;
    // 0x1cff68: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1cff68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1cff6c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1CFF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF74u);
    ctx->pc = 0x1CFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF6Cu;
    // 0x1cff70: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1CFF6Cu, 0x1CFF74u)) {
        return;
    }
    ctx->pc = 0x1CFF74u;
label_1cff74:
    // 0x1cff74: 0xc073ef4  jal         func_1CFBD0
    ctx->pc = 0x1CFF74u;
    SET_GPR_U32(ctx, 31, 0x1CFF7Cu);
    ctx->pc = 0x1CFBD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1CFBD0u, 0x1CFF74u, 0x1CFF7Cu)) {
        return;
    }
    ctx->pc = 0x1CFF7Cu;
label_1cff7c:
    // 0x1cff7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cff80:
    // 0x1cff80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cff80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF84u;
        // 0x1cff88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF8Cu;
    // 0x1cff8c: 0x0  nop
    ctx->pc = 0x1cff8cu;
    // NOP
    ctx->pc = 0x1cff90u;
}
