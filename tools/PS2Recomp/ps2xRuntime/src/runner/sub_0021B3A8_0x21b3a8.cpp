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

// Function: sub_0021B3A8
// Address: 0x21b3a8 - 0x21b420
void sub_0021B3A8_0x21b3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B3A8_0x21b3a8");
#endif

    switch (ctx->pc) {
        case 0x21b3ecu: goto label_21b3ec;
        case 0x21b3f4u: goto label_21b3f4;
        case 0x21b404u: goto label_21b404;
        default: break;
    }

    ctx->pc = 0x21b3a8u;

    // 0x21b3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b3ac: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x21b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x21b3b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21b3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21b3b4: 0x8c4202c8  lw          $v0, 0x2C8($v0)
    ctx->pc = 0x21b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C02C8u));
    // 0x21b3b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21b3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21b3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21b3c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B3C0u;
    {
        const bool branch_taken_0x21b3c0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x21B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3C0u;
        // 0x21b3c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3c0) {
            ctx->pc = 0x21B3D0u;
            goto label_21b3d0;
        }
    }
    ctx->pc = 0x21B3C8u;
    // 0x21b3c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21B3C8u;
    {
        const bool branch_taken_0x21b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3C8u;
        // 0x21b3cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3c8) {
            ctx->pc = 0x21B408u;
            goto label_21b408;
        }
    }
    ctx->pc = 0x21B3D0u;
label_21b3d0:
    // 0x21b3d0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x21b3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21b3d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21b3d8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x21B3D8u;
    {
        const bool branch_taken_0x21b3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21b3d8) {
            ctx->pc = 0x21B3DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B3D8u;
            // 0x21b3dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B40Cu;
            goto label_21b40c;
        }
    }
    ctx->pc = 0x21B3E0u;
    // 0x21b3e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21b3e4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x21B3E4u;
    SET_GPR_U32(ctx, 31, 0x21B3ECu);
    ctx->pc = 0x21B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3E4u;
    // 0x21b3e8: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x21B3E4u, 0x21B3ECu)) {
        return;
    }
    ctx->pc = 0x21B3ECu;
label_21b3ec:
    // 0x21b3ec: 0xc086d08  jal         func_21B420
    ctx->pc = 0x21B3ECu;
    SET_GPR_U32(ctx, 31, 0x21B3F4u);
    ctx->pc = 0x21B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3ECu;
    // 0x21b3f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B420u, 0x21B3ECu, 0x21B3F4u)) {
        return;
    }
    ctx->pc = 0x21B3F4u;
label_21b3f4:
    // 0x21b3f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21b3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21b3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b3fc: 0xc086e1e  jal         func_21B878
    ctx->pc = 0x21B3FCu;
    SET_GPR_U32(ctx, 31, 0x21B404u);
    ctx->pc = 0x21B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B3FCu;
    // 0x21b400: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B878u, 0x21B3FCu, 0x21B404u)) {
        return;
    }
    ctx->pc = 0x21B404u;
label_21b404:
    // 0x21b404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21b408:
    // 0x21b408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21b408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21b40c:
    // 0x21b40c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b414: 0x3e00008  jr          $ra
    ctx->pc = 0x21B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B414u;
        // 0x21b418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B41Cu;
    // 0x21b41c: 0x0  nop
    ctx->pc = 0x21b41cu;
    // NOP
    ctx->pc = 0x21b420u;
}
