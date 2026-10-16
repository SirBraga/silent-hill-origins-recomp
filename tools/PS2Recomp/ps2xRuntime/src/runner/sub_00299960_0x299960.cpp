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

// Function: sub_00299960
// Address: 0x299960 - 0x2999c8
void sub_00299960_0x299960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299960_0x299960");
#endif

    switch (ctx->pc) {
        case 0x29998cu: goto label_29998c;
        case 0x2999acu: goto label_2999ac;
        case 0x2999b8u: goto label_2999b8;
        default: break;
    }

    ctx->pc = 0x299960u;

    // 0x299960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29996c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29996cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299974: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299974u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x299978: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x299978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x29997c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29997Cu;
    {
        const bool branch_taken_0x29997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29997c) {
            ctx->pc = 0x299980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29997Cu;
            // 0x299980: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299994u;
            goto label_299994;
        }
    }
    ctx->pc = 0x299984u;
    // 0x299984: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x299984u;
    SET_GPR_U32(ctx, 31, 0x29998Cu);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x299984u, 0x29998Cu)) {
        return;
    }
    ctx->pc = 0x29998Cu;
label_29998c:
    // 0x29998c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299990: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x299990u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_299994:
    // 0x299994: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x299994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x299998: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299998u;
    {
        const bool branch_taken_0x299998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299998u;
        // 0x29999c: 0x3c100068  lui         $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299998) {
            ctx->pc = 0x2999B8u;
            goto label_2999b8;
        }
    }
    ctx->pc = 0x2999A0u;
    // 0x2999a0: 0x8e026ccc  lw          $v0, 0x6CCC($s0)
    ctx->pc = 0x2999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x2999a4: 0xc0c4c8a  jal         func_313228
    ctx->pc = 0x2999A4u;
    SET_GPR_U32(ctx, 31, 0x2999ACu);
    ctx->pc = 0x2999A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999A4u;
    // 0x2999a8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x2999A4u, 0x2999ACu)) {
        return;
    }
    ctx->pc = 0x2999ACu;
label_2999ac:
    // 0x2999ac: 0x8e036ccc  lw          $v1, 0x6CCC($s0)
    ctx->pc = 0x2999acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27852)));
    // 0x2999b0: 0xc0c4c8a  jal         func_313228
    ctx->pc = 0x2999B0u;
    SET_GPR_U32(ctx, 31, 0x2999B8u);
    ctx->pc = 0x2999B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999B0u;
    // 0x2999b4: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313228u, 0x2999B0u, 0x2999B8u)) {
        return;
    }
    ctx->pc = 0x2999B8u;
label_2999b8:
    // 0x2999b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2999b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2999bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2999bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2999c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2999C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2999C0u;
        // 0x2999c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2999C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2999C8u;
}
