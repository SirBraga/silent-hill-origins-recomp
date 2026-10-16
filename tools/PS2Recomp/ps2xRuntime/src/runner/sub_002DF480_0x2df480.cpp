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

// Function: sub_002DF480
// Address: 0x2df480 - 0x2df4b8
void sub_002DF480_0x2df480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF480_0x2df480");
#endif

    switch (ctx->pc) {
        case 0x2df480u: goto label_2df480;
        case 0x2df484u: goto label_2df484;
        case 0x2df488u: goto label_2df488;
        case 0x2df48cu: goto label_2df48c;
        case 0x2df490u: goto label_2df490;
        case 0x2df494u: goto label_2df494;
        case 0x2df498u: goto label_2df498;
        case 0x2df49cu: goto label_2df49c;
        case 0x2df4a0u: goto label_2df4a0;
        case 0x2df4a4u: goto label_2df4a4;
        case 0x2df4a8u: goto label_2df4a8;
        case 0x2df4acu: goto label_2df4ac;
        case 0x2df4b0u: goto label_2df4b0;
        case 0x2df4b4u: goto label_2df4b4;
        default: break;
    }

    ctx->pc = 0x2df480u;

label_2df480:
    // 0x2df480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2df484:
    // 0x2df484: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
label_2df488:
    if (ctx->pc == 0x2DF488u) {
        ctx->pc = 0x2DF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF484u;
        // 0x2df488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF48Cu;
        goto label_2df48c;
    }
    ctx->pc = 0x2DF484u;
    {
        const bool branch_taken_0x2df484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF484u;
        // 0x2df488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df484) {
            ctx->pc = 0x2DF4A4u;
            goto label_2df4a4;
        }
    }
    ctx->pc = 0x2DF48Cu;
label_2df48c:
    // 0x2df48c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2df48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2df490:
    // 0x2df490: 0x8c6210b0  lw          $v0, 0x10B0($v1)
    ctx->pc = 0x2df490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4272)));
label_2df494:
    // 0x2df494: 0x40f809  jalr        $v0
label_2df498:
    if (ctx->pc == 0x2DF498u) {
        ctx->pc = 0x2DF49Cu;
        goto label_2df49c;
    }
    ctx->pc = 0x2DF494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF49Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF494u, 0x2DF49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF49Cu;
label_2df49c:
    // 0x2df49c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2df4a0:
    if (ctx->pc == 0x2DF4A0u) {
        ctx->pc = 0x2DF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF49Cu;
        // 0x2df4a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4A4u;
        goto label_2df4a4;
    }
    ctx->pc = 0x2DF49Cu;
    {
        const bool branch_taken_0x2df49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF49Cu;
        // 0x2df4a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df49c) {
            ctx->pc = 0x2DF4ACu;
            goto label_2df4ac;
        }
    }
    ctx->pc = 0x2DF4A4u;
label_2df4a4:
    // 0x2df4a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df4a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df4a8:
    // 0x2df4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df4ac:
    // 0x2df4ac: 0x3e00008  jr          $ra
label_2df4b0:
    if (ctx->pc == 0x2DF4B0u) {
        ctx->pc = 0x2DF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4ACu;
        // 0x2df4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4B4u;
        goto label_2df4b4;
    }
    ctx->pc = 0x2DF4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4ACu;
        // 0x2df4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF4B4u;
label_2df4b4:
    // 0x2df4b4: 0x0  nop
    ctx->pc = 0x2df4b4u;
    // NOP
    ctx->pc = 0x2df4b8u;
}
