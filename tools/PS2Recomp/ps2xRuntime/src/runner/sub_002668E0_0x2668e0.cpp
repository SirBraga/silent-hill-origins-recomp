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

// Function: sub_002668E0
// Address: 0x2668e0 - 0x266960
void sub_002668E0_0x2668e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002668E0_0x2668e0");
#endif

    switch (ctx->pc) {
        case 0x266930u: goto label_266930;
        case 0x266940u: goto label_266940;
        default: break;
    }

    ctx->pc = 0x2668e0u;

    // 0x2668e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2668e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2668e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2668e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2668e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2668e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2668ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2668ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2668f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2668f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2668f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2668f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2668f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2668f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2668fc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2668fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x266900: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x266900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x266904: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x266904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x266908: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x266908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26690c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x266910: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x266910u;
    {
        const bool branch_taken_0x266910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266910u;
        // 0x266914: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266910) {
            ctx->pc = 0x266944u;
            goto label_266944;
        }
    }
    ctx->pc = 0x266918u;
    // 0x266918: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x266918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x26691c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26691cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266920: 0x8c43e6e8  lw          $v1, -0x1918($v0)
    ctx->pc = 0x266920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x266924: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x266924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x266928: 0xc0983d6  jal         func_260F58
    ctx->pc = 0x266928u;
    SET_GPR_U32(ctx, 31, 0x266930u);
    ctx->pc = 0x26692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266928u;
    // 0x26692c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x260F58u, 0x266928u, 0x266930u)) {
        return;
    }
    ctx->pc = 0x266930u;
label_266930:
    // 0x266930: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x266930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x266934: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266938: 0xc099c6a  jal         func_2671A8
    ctx->pc = 0x266938u;
    SET_GPR_U32(ctx, 31, 0x266940u);
    ctx->pc = 0x26693Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266938u;
    // 0x26693c: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2671A8u, 0x266938u, 0x266940u)) {
        return;
    }
    ctx->pc = 0x266940u;
label_266940:
    // 0x266940: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x266940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_266944:
    // 0x266944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266948: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x266948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26694c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26694cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266954: 0x3e00008  jr          $ra
    ctx->pc = 0x266954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266954u;
        // 0x266958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26695Cu;
    // 0x26695c: 0x0  nop
    ctx->pc = 0x26695cu;
    // NOP
    ctx->pc = 0x266960u;
}
