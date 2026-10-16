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

// Function: sub_00139138
// Address: 0x139138 - 0x1391c0
void sub_00139138_0x139138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139138_0x139138");
#endif

    switch (ctx->pc) {
        case 0x13916cu: goto label_13916c;
        case 0x139180u: goto label_139180;
        case 0x139194u: goto label_139194;
        default: break;
    }

    ctx->pc = 0x139138u;

    // 0x139138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13913c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13913cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x139140: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x139140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x139144: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x139144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x139148: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x139148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13914c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13914cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139150: 0x2471e8d8  addiu       $s1, $v1, -0x1728
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961368));
    // 0x139154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x139154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x139158: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13915c: 0x8c50ea90  lw          $s0, -0x1570($v0)
    ctx->pc = 0x13915cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x68EA90u));
    // 0x139160: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x139160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x139164: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x139164u;
    SET_GPR_U32(ctx, 31, 0x13916Cu);
    ctx->pc = 0x139168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139164u;
    // 0x139168: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x139164u, 0x13916Cu)) {
        return;
    }
    ctx->pc = 0x13916Cu;
label_13916c:
    // 0x13916c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13916Cu;
    {
        const bool branch_taken_0x13916c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13916Cu;
        // 0x139170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13916c) {
            ctx->pc = 0x13919Cu;
            goto label_13919c;
        }
    }
    ctx->pc = 0x139174u;
    // 0x139174: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139178: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x139178u;
    SET_GPR_U32(ctx, 31, 0x139180u);
    ctx->pc = 0x13917Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139178u;
    // 0x13917c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x139178u, 0x139180u)) {
        return;
    }
    ctx->pc = 0x139180u;
label_139180:
    // 0x139180: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139180u;
    {
        const bool branch_taken_0x139180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139180u;
        // 0x139184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139180) {
            ctx->pc = 0x13919Cu;
            goto label_13919c;
        }
    }
    ctx->pc = 0x139188u;
    // 0x139188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13918c: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x13918Cu;
    SET_GPR_U32(ctx, 31, 0x139194u);
    ctx->pc = 0x139190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13918Cu;
    // 0x139190: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x13918Cu, 0x139194u)) {
        return;
    }
    ctx->pc = 0x139194u;
label_139194:
    // 0x139194: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139194u;
    {
        const bool branch_taken_0x139194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139194u;
        // 0x139198: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139194) {
            ctx->pc = 0x1391A0u;
            goto label_1391a0;
        }
    }
    ctx->pc = 0x13919Cu;
label_13919c:
    // 0x13919c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13919cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1391a0:
    // 0x1391a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1391a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1391a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1391a8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1391a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1391ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1391acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1391b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1391b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1391b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1391b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1391b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1391B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1391BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391B8u;
        // 0x1391bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1391B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1391C0u;
}
