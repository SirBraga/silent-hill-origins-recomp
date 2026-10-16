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

// Function: sub_001D0BF0
// Address: 0x1d0bf0 - 0x1d0c40
void sub_001D0BF0_0x1d0bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BF0_0x1d0bf0");
#endif

    switch (ctx->pc) {
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c38u: goto label_1d0c38;
        default: break;
    }

    ctx->pc = 0x1d0bf0u;

    // 0x1d0bf0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1d0bf4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0bf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0bfc: 0x8c4543b8  lw          $a1, 0x43B8($v0)
    ctx->pc = 0x1d0bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B43B8u));
    // 0x1d0c00: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d0c04: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0C04u;
    {
        const bool branch_taken_0x1d0c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C04u;
        // 0x1d0c08: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c04) {
            ctx->pc = 0x1D0C24u;
            goto label_1d0c24;
        }
    }
    ctx->pc = 0x1D0C0Cu;
    // 0x1d0c0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0c10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0C10u;
    {
        const bool branch_taken_0x1d0c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C10u;
        // 0x1d0c14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c10) {
            ctx->pc = 0x1D0C24u;
            goto label_1d0c24;
        }
    }
    ctx->pc = 0x1D0C18u;
    // 0x1d0c18: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d0c1c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D0C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0C24u);
    ctx->pc = 0x1D0C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C1Cu;
    // 0x1d0c20: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D0C1Cu, 0x1D0C24u)) {
        return;
    }
    ctx->pc = 0x1D0C24u;
label_1d0c24:
    // 0x1d0c24: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d0c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0c2c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1d0c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1d0c30: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1D0C30u;
    SET_GPR_U32(ctx, 31, 0x1D0C38u);
    ctx->pc = 0x1D0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C30u;
    // 0x1d0c34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1D0C30u, 0x1D0C38u)) {
        return;
    }
    ctx->pc = 0x1D0C38u;
label_1d0c38:
    // 0x1d0c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d0c40u;
}
