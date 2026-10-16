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

// Function: sub_0021BDA8
// Address: 0x21bda8 - 0x21be38
void sub_0021BDA8_0x21bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BDA8_0x21bda8");
#endif

    switch (ctx->pc) {
        case 0x21bdc0u: goto label_21bdc0;
        default: break;
    }

    ctx->pc = 0x21bda8u;

    // 0x21bda8: 0x24a5000f  addiu       $a1, $a1, 0xF
    ctx->pc = 0x21bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x21bdac: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x21bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21bdb0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21bdb4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x21bdb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x21bdb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BDB8u;
    {
        const bool branch_taken_0x21bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDB8u;
        // 0x21bdbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdb8) {
            ctx->pc = 0x21BDC4u;
            goto label_21bdc4;
        }
    }
    ctx->pc = 0x21BDC0u;
label_21bdc0:
    // 0x21bdc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21bdc4:
    // 0x21bdc4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21BDC4u;
    {
        const bool branch_taken_0x21bdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bdc4) {
            ctx->pc = 0x21BDE4u;
            goto label_21bde4;
        }
    }
    ctx->pc = 0x21BDCCu;
    // 0x21bdcc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21bdd0: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x21bdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21bdd4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21BDD4u;
    {
        const bool branch_taken_0x21bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bdd4) {
            ctx->pc = 0x21BDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BDD4u;
            // 0x21bdd8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bdc0;
        }
    }
    ctx->pc = 0x21BDDCu;
    // 0x21bddc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BDDCu;
    {
        const bool branch_taken_0x21bddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bddc) {
            ctx->pc = 0x21BDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BDDCu;
            // 0x21bde0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BDECu;
            goto label_21bdec;
        }
    }
    ctx->pc = 0x21BDE4u;
label_21bde4:
    // 0x21bde4: 0x3e00008  jr          $ra
    ctx->pc = 0x21BDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDE4u;
        // 0x21bde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BDECu;
label_21bdec:
    // 0x21bdec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x21bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21bdf0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21BDF0u;
    {
        const bool branch_taken_0x21bdf0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDF0u;
        // 0x21bdf4: 0x653021  addu        $a2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdf0) {
            ctx->pc = 0x21BE18u;
            goto label_21be18;
        }
    }
    ctx->pc = 0x21BDF8u;
    // 0x21bdf8: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x21bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x21bdfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21be00: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE00u;
    {
        const bool branch_taken_0x21be00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE00u;
        // 0x21be04: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be00) {
            ctx->pc = 0x21BE10u;
            goto label_21be10;
        }
    }
    ctx->pc = 0x21BE08u;
    // 0x21be08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21BE08u;
    {
        const bool branch_taken_0x21be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE08u;
        // 0x21be0c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be08) {
            ctx->pc = 0x21BE2Cu;
            goto label_21be2c;
        }
    }
    ctx->pc = 0x21BE10u;
label_21be10:
    // 0x21be10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21BE10u;
    {
        const bool branch_taken_0x21be10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE10u;
        // 0x21be14: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be10) {
            ctx->pc = 0x21BE2Cu;
            goto label_21be2c;
        }
    }
    ctx->pc = 0x21BE18u;
label_21be18:
    // 0x21be18: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21BE18u;
    {
        const bool branch_taken_0x21be18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE18u;
        // 0x21be1c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be18) {
            ctx->pc = 0x21BE28u;
            goto label_21be28;
        }
    }
    ctx->pc = 0x21BE20u;
    // 0x21be20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21BE20u;
    {
        const bool branch_taken_0x21be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE20u;
        // 0x21be24: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21be20) {
            ctx->pc = 0x21BE2Cu;
            goto label_21be2c;
        }
    }
    ctx->pc = 0x21BE28u;
label_21be28:
    // 0x21be28: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x21be28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_21be2c:
    // 0x21be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x21BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BE2Cu;
        // 0x21be30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE34u;
    // 0x21be34: 0x0  nop
    ctx->pc = 0x21be34u;
    // NOP
    ctx->pc = 0x21be38u;
}
