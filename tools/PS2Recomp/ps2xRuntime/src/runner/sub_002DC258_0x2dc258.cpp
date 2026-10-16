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

// Function: sub_002DC258
// Address: 0x2dc258 - 0x2dc298
void sub_002DC258_0x2dc258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC258_0x2dc258");
#endif

    switch (ctx->pc) {
        case 0x2dc258u: goto label_2dc258;
        case 0x2dc25cu: goto label_2dc25c;
        case 0x2dc260u: goto label_2dc260;
        case 0x2dc264u: goto label_2dc264;
        case 0x2dc268u: goto label_2dc268;
        case 0x2dc26cu: goto label_2dc26c;
        case 0x2dc270u: goto label_2dc270;
        case 0x2dc274u: goto label_2dc274;
        case 0x2dc278u: goto label_2dc278;
        case 0x2dc27cu: goto label_2dc27c;
        case 0x2dc280u: goto label_2dc280;
        case 0x2dc284u: goto label_2dc284;
        case 0x2dc288u: goto label_2dc288;
        case 0x2dc28cu: goto label_2dc28c;
        case 0x2dc290u: goto label_2dc290;
        case 0x2dc294u: goto label_2dc294;
        default: break;
    }

    ctx->pc = 0x2dc258u;

label_2dc258:
    // 0x2dc258: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2dc258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2dc25c:
    // 0x2dc25c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dc260:
    // 0x2dc260: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2dc260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2dc264:
    // 0x2dc264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dc268:
    // 0x2dc268: 0x40f809  jalr        $v0
label_2dc26c:
    if (ctx->pc == 0x2DC26Cu) {
        ctx->pc = 0x2DC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC268u;
        // 0x2dc26c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC270u;
        goto label_2dc270;
    }
    ctx->pc = 0x2DC268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DC270u);
        ctx->pc = 0x2DC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC268u;
        // 0x2dc26c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC268u, 0x2DC270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DC270u;
label_2dc270:
    // 0x2dc270: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dc270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dc274:
    // 0x2dc274: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2dc278:
    if (ctx->pc == 0x2DC278u) {
        ctx->pc = 0x2DC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC274u;
        // 0x2dc278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC27Cu;
        goto label_2dc27c;
    }
    ctx->pc = 0x2DC274u;
    {
        const bool branch_taken_0x2dc274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC274u;
        // 0x2dc278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc274) {
            ctx->pc = 0x2DC28Cu;
            goto label_2dc28c;
        }
    }
    ctx->pc = 0x2DC27Cu;
label_2dc27c:
    // 0x2dc27c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x2dc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_2dc280:
    // 0x2dc280: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_2dc284:
    // 0x2dc284: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2dc284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2dc288:
    // 0x2dc288: 0xac43fffc  sw          $v1, -0x4($v0)
    ctx->pc = 0x2dc288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
label_2dc28c:
    // 0x2dc28c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dc290:
    // 0x2dc290: 0x3e00008  jr          $ra
label_2dc294:
    if (ctx->pc == 0x2DC294u) {
        ctx->pc = 0x2DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC290u;
        // 0x2dc294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DC298u;
        goto label_fallthrough_0x2dc290;
    }
    ctx->pc = 0x2DC290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC290u;
        // 0x2dc294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dc290:
    ctx->pc = 0x2DC298u;
}
