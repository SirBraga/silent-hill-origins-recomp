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

// Function: sub_001BCAB8
// Address: 0x1bcab8 - 0x1bcb70
void sub_001BCAB8_0x1bcab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCAB8_0x1bcab8");
#endif

    switch (ctx->pc) {
        case 0x1bcb30u: goto label_1bcb30;
        case 0x1bcb64u: goto label_1bcb64;
        default: break;
    }

    ctx->pc = 0x1bcab8u;

    // 0x1bcab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bcab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bcabc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bcabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bcac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bcac4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1bcac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bcac8: 0x8ca6002c  lw          $a2, 0x2C($a1)
    ctx->pc = 0x1bcac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1bcacc: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1bcaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bcad0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bcad4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1bcad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1bcad8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1bcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1bcadc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1bcadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bcae0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCAE0u;
    {
        const bool branch_taken_0x1bcae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BCAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAE0u;
        // 0x1bcae4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcae0) {
            ctx->pc = 0x1BCAFCu;
            goto label_1bcafc;
        }
    }
    ctx->pc = 0x1BCAE8u;
    // 0x1bcae8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BCAE8u;
    {
        const bool branch_taken_0x1bcae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BCAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAE8u;
        // 0x1bcaec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcae8) {
            ctx->pc = 0x1BCB38u;
            goto label_1bcb38;
        }
    }
    ctx->pc = 0x1BCAF0u;
    // 0x1bcaf0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1bcaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bcaf4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BCAF4u;
    {
        const bool branch_taken_0x1bcaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCAF4u;
        // 0x1bcaf8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcaf4) {
            ctx->pc = 0x1BCB38u;
            goto label_1bcb38;
        }
    }
    ctx->pc = 0x1BCAFCu;
label_1bcafc:
    // 0x1bcafc: 0xaca6002c  sw          $a2, 0x2C($a1)
    ctx->pc = 0x1bcafcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 6));
    // 0x1bcb00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1bcb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1bcb04: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bcb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bcb08: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1bcb08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B0u));
    // 0x1bcb0c: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bcb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bcb10: 0x10a30015  beq         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BCB10u;
    {
        const bool branch_taken_0x1bcb10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB10u;
        // 0x1bcb14: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb10) {
            ctx->pc = 0x1BCB68u;
            goto label_1bcb68;
        }
    }
    ctx->pc = 0x1BCB18u;
    // 0x1bcb18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bcb1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BCB1Cu;
    {
        const bool branch_taken_0x1bcb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB1Cu;
        // 0x1bcb20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb1c) {
            ctx->pc = 0x1BCB68u;
            goto label_1bcb68;
        }
    }
    ctx->pc = 0x1BCB24u;
    // 0x1bcb24: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bcb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bcb28: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BCB28u;
    SET_GPR_U32(ctx, 31, 0x1BCB30u);
    ctx->pc = 0x1BCB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB28u;
    // 0x1bcb2c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BCB28u, 0x1BCB30u)) {
        return;
    }
    ctx->pc = 0x1BCB30u;
label_1bcb30:
    // 0x1bcb30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BCB30u;
    {
        const bool branch_taken_0x1bcb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB30u;
        // 0x1bcb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb30) {
            ctx->pc = 0x1BCB68u;
            goto label_1bcb68;
        }
    }
    ctx->pc = 0x1BCB38u;
label_1bcb38:
    // 0x1bcb38: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1bcb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1bcb3c: 0x8c454398  lw          $a1, 0x4398($v0)
    ctx->pc = 0x1bcb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17304)));
    // 0x1bcb40: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1bcb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1bcb44: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCB44u;
    {
        const bool branch_taken_0x1bcb44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BCB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB44u;
        // 0x1bcb48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb44) {
            ctx->pc = 0x1BCB68u;
            goto label_1bcb68;
        }
    }
    ctx->pc = 0x1BCB4Cu;
    // 0x1bcb4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bcb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bcb50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCB50u;
    {
        const bool branch_taken_0x1bcb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB50u;
        // 0x1bcb54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcb50) {
            ctx->pc = 0x1BCB68u;
            goto label_1bcb68;
        }
    }
    ctx->pc = 0x1BCB58u;
    // 0x1bcb58: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1bcb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1bcb5c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1BCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BCB64u);
    ctx->pc = 0x1BCB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCB5Cu;
    // 0x1bcb60: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1BCB5Cu, 0x1BCB64u)) {
        return;
    }
    ctx->pc = 0x1BCB64u;
label_1bcb64:
    // 0x1bcb64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bcb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bcb68:
    // 0x1bcb68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCB68u;
        // 0x1bcb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCB70u;
}
