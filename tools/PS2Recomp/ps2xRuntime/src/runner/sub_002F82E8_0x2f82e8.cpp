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

// Function: sub_002F82E8
// Address: 0x2f82e8 - 0x2f8358
void sub_002F82E8_0x2f82e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F82E8_0x2f82e8");
#endif

    switch (ctx->pc) {
        case 0x2f832cu: goto label_2f832c;
        case 0x2f8340u: goto label_2f8340;
        default: break;
    }

    ctx->pc = 0x2f82e8u;

    // 0x2f82e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f82e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f82ec: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f82ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f82f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f82f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f82f4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f82f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f82f8: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f82f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f82fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f82fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8300: 0x260757c0  addiu       $a3, $s0, 0x57C0
    ctx->pc = 0x2f8300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 22464));
    // 0x2f8304: 0x34a51304  ori         $a1, $a1, 0x1304
    ctx->pc = 0x2f8304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4868);
    // 0x2f8308: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x2f8308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7257C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7257C4u, _value); } while (0);
    // 0x2f830c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f830cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8310: 0x244456c0  addiu       $a0, $v0, 0x56C0
    ctx->pc = 0x2f8310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22208));
    // 0x2f8314: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8318: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f8318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f831c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f831cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8320: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f8320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8324: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2F8324u;
    SET_GPR_U32(ctx, 31, 0x2F832Cu);
    ctx->pc = 0x2F8328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8324u;
    // 0x2f8328: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2F8324u, 0x2F832Cu)) {
        return;
    }
    ctx->pc = 0x2F832Cu;
label_2f832c:
    // 0x2f832c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F832Cu;
    {
        const bool branch_taken_0x2f832c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F832Cu;
        // 0x2f8330: 0x8e0257c0  lw          $v0, 0x57C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f832c) {
            ctx->pc = 0x2F8344u;
            goto label_2f8344;
        }
    }
    ctx->pc = 0x2F8334u;
    // 0x2f8334: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f8334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f8338: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F8338u;
    SET_GPR_U32(ctx, 31, 0x2F8340u);
    ctx->pc = 0x2F833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8338u;
    // 0x2f833c: 0x248402c0  addiu       $a0, $a0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F8338u, 0x2F8340u)) {
        return;
    }
    ctx->pc = 0x2F8340u;
label_2f8340:
    // 0x2f8340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8344:
    // 0x2f8344: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8348: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f834c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F834Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F834Cu;
        // 0x2f8350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F834Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8354u;
    // 0x2f8354: 0x0  nop
    ctx->pc = 0x2f8354u;
    // NOP
    ctx->pc = 0x2f8358u;
}
