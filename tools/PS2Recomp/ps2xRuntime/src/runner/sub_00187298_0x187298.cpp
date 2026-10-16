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

// Function: sub_00187298
// Address: 0x187298 - 0x187330
void sub_00187298_0x187298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187298_0x187298");
#endif

    switch (ctx->pc) {
        case 0x1872c0u: goto label_1872c0;
        case 0x187324u: goto label_187324;
        default: break;
    }

    ctx->pc = 0x187298u;

    // 0x187298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18729c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1872a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1872a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1872a4: 0x24428738  addiu       $v0, $v0, -0x78C8
    ctx->pc = 0x1872a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936376));
    // 0x1872a8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1872a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1872ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1872acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1872b0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1872B0u;
    {
        const bool branch_taken_0x1872b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872B0u;
        // 0x1872b4: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872b0) {
            ctx->pc = 0x187314u;
            goto label_187314;
        }
    }
    ctx->pc = 0x1872B8u;
    // 0x1872b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1872b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1872bc: 0x0  nop
    ctx->pc = 0x1872bcu;
    // NOP
label_1872c0:
    // 0x1872c0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1872C0u;
    {
        const bool branch_taken_0x1872c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1872c0) {
            ctx->pc = 0x1872C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1872C0u;
            // 0x1872c4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x187308u;
            goto label_187308;
        }
    }
    ctx->pc = 0x1872C8u;
    // 0x1872c8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1872c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1872cc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1872CCu;
    {
        const bool branch_taken_0x1872cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1872D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872CCu;
        // 0x1872d0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872cc) {
            ctx->pc = 0x1872DCu;
            goto label_1872dc;
        }
    }
    ctx->pc = 0x1872D4u;
    // 0x1872d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1872D4u;
    {
        const bool branch_taken_0x1872d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872D4u;
        // 0x1872d8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872d4) {
            ctx->pc = 0x1872E0u;
            goto label_1872e0;
        }
    }
    ctx->pc = 0x1872DCu;
label_1872dc:
    // 0x1872dc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1872dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1872e0:
    // 0x1872e0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1872e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1872e4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1872E4u;
    {
        const bool branch_taken_0x1872e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1872E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872E4u;
        // 0x1872e8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872e4) {
            ctx->pc = 0x1872F4u;
            goto label_1872f4;
        }
    }
    ctx->pc = 0x1872ECu;
    // 0x1872ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1872ECu;
    {
        const bool branch_taken_0x1872ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872ECu;
        // 0x1872f0: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872ec) {
            ctx->pc = 0x1872F8u;
            goto label_1872f8;
        }
    }
    ctx->pc = 0x1872F4u;
label_1872f4:
    // 0x1872f4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1872f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1872f8:
    // 0x1872f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1872f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1872fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x187300: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x187300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x187304: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x187304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_187308:
    // 0x187308: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x187308u;
    {
        const bool branch_taken_0x187308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x187308) {
            ctx->pc = 0x18730Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x187308u;
            // 0x18730c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1872C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1872c0;
        }
    }
    ctx->pc = 0x187310u;
    // 0x187310: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x187310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_187314:
    // 0x187314: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187314u;
    {
        const bool branch_taken_0x187314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187314u;
        // 0x187318: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187314) {
            ctx->pc = 0x187328u;
            goto label_187328;
        }
    }
    ctx->pc = 0x18731Cu;
    // 0x18731c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18731Cu;
    SET_GPR_U32(ctx, 31, 0x187324u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18731Cu, 0x187324u)) {
        return;
    }
    ctx->pc = 0x187324u;
label_187324:
    // 0x187324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187328:
    // 0x187328: 0x3e00008  jr          $ra
    ctx->pc = 0x187328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187328u;
        // 0x18732c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187330u;
}
