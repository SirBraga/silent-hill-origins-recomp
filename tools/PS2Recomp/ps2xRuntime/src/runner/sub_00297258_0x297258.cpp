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

// Function: sub_00297258
// Address: 0x297258 - 0x2972d0
void sub_00297258_0x297258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297258_0x297258");
#endif

    switch (ctx->pc) {
        case 0x297288u: goto label_297288;
        case 0x297298u: goto label_297298;
        case 0x2972a0u: goto label_2972a0;
        default: break;
    }

    ctx->pc = 0x297258u;

    // 0x297258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29725c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297260: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297264: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x297264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x297268: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29726c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29726cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297270: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297274: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x297274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x297278: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x297278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x29727c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29727Cu;
    {
        const bool branch_taken_0x29727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29727Cu;
        // 0x297280: 0x3c12006b  lui         $s2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29727c) {
            ctx->pc = 0x2972B0u;
            goto label_2972b0;
        }
    }
    ctx->pc = 0x297284u;
    // 0x297284: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x297284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_297288:
    // 0x297288: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297288u;
    {
        const bool branch_taken_0x297288 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x297288) {
            ctx->pc = 0x2972A0u;
            goto label_2972a0;
        }
    }
    ctx->pc = 0x297290u;
    // 0x297290: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x297290u;
    SET_GPR_U32(ctx, 31, 0x297298u);
    ctx->pc = 0x297294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297290u;
    // 0x297294: 0x2644d778  addiu       $a0, $s2, -0x2888 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x297290u, 0x297298u)) {
        return;
    }
    ctx->pc = 0x297298u;
label_297298:
    // 0x297298: 0xc0a5dd2  jal         func_297748
    ctx->pc = 0x297298u;
    SET_GPR_U32(ctx, 31, 0x2972A0u);
    ctx->pc = 0x29729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297298u;
    // 0x29729c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297748u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x297748u, 0x297298u, 0x2972A0u)) {
        return;
    }
    ctx->pc = 0x2972A0u;
label_2972a0:
    // 0x2972a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2972a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2972a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x2972a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x2972a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2972A8u;
    {
        const bool branch_taken_0x2972a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2972ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972A8u;
        // 0x2972ac: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2972a8) {
            ctx->pc = 0x297288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297288;
        }
    }
    ctx->pc = 0x2972B0u;
label_2972b0:
    // 0x2972b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2972b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2972b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2972b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2972b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2972b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2972bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2972bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2972c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2972C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2972C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2972C0u;
        // 0x2972c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2972C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2972C8u;
    // 0x2972c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2972c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2972cc: 0x0  nop
    ctx->pc = 0x2972ccu;
    // NOP
    ctx->pc = 0x2972d0u;
}
