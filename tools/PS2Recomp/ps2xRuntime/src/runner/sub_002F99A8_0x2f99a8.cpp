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

// Function: sub_002F99A8
// Address: 0x2f99a8 - 0x2f9a20
void sub_002F99A8_0x2f99a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F99A8_0x2f99a8");
#endif

    switch (ctx->pc) {
        case 0x2f99a8u: goto label_2f99a8;
        case 0x2f99acu: goto label_2f99ac;
        case 0x2f99b0u: goto label_2f99b0;
        case 0x2f99b4u: goto label_2f99b4;
        case 0x2f99b8u: goto label_2f99b8;
        case 0x2f99bcu: goto label_2f99bc;
        case 0x2f99c0u: goto label_2f99c0;
        case 0x2f99c4u: goto label_2f99c4;
        case 0x2f99c8u: goto label_2f99c8;
        case 0x2f99ccu: goto label_2f99cc;
        case 0x2f99d0u: goto label_2f99d0;
        case 0x2f99d4u: goto label_2f99d4;
        case 0x2f99d8u: goto label_2f99d8;
        case 0x2f99dcu: goto label_2f99dc;
        case 0x2f99e0u: goto label_2f99e0;
        case 0x2f99e4u: goto label_2f99e4;
        case 0x2f99e8u: goto label_2f99e8;
        case 0x2f99ecu: goto label_2f99ec;
        case 0x2f99f0u: goto label_2f99f0;
        case 0x2f99f4u: goto label_2f99f4;
        case 0x2f99f8u: goto label_2f99f8;
        case 0x2f99fcu: goto label_2f99fc;
        case 0x2f9a00u: goto label_2f9a00;
        case 0x2f9a04u: goto label_2f9a04;
        case 0x2f9a08u: goto label_2f9a08;
        case 0x2f9a0cu: goto label_2f9a0c;
        case 0x2f9a10u: goto label_2f9a10;
        case 0x2f9a14u: goto label_2f9a14;
        case 0x2f9a18u: goto label_2f9a18;
        case 0x2f9a1cu: goto label_2f9a1c;
        default: break;
    }

    ctx->pc = 0x2f99a8u;

label_2f99a8:
    // 0x2f99a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f99a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f99ac:
    // 0x2f99ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2f99acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f99b0:
    // 0x2f99b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f99b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f99b4:
    // 0x2f99b4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_2f99b8:
    if (ctx->pc == 0x2F99B8u) {
        ctx->pc = 0x2F99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99B4u;
        // 0x2f99b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99BCu;
        goto label_2f99bc;
    }
    ctx->pc = 0x2F99B4u;
    {
        const bool branch_taken_0x2f99b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99B4u;
        // 0x2f99b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99b4) {
            ctx->pc = 0x2F9A0Cu;
            goto label_2f9a0c;
        }
    }
    ctx->pc = 0x2F99BCu;
label_2f99bc:
    // 0x2f99bc: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x2f99bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_2f99c0:
    // 0x2f99c0: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_2f99c4:
    if (ctx->pc == 0x2F99C4u) {
        ctx->pc = 0x2F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99C0u;
        // 0x2f99c4: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99C8u;
        goto label_2f99c8;
    }
    ctx->pc = 0x2F99C0u;
    {
        const bool branch_taken_0x2f99c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99C0u;
        // 0x2f99c4: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99c0) {
            ctx->pc = 0x2F9A0Cu;
            goto label_2f9a0c;
        }
    }
    ctx->pc = 0x2F99C8u;
label_2f99c8:
    // 0x2f99c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2f99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f99cc:
    // 0x2f99cc: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x2f99ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2f99d0:
    // 0x2f99d0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x2f99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2f99d4:
    // 0x2f99d4: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x2f99d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f99d8:
    // 0x2f99d8: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_2f99dc:
    if (ctx->pc == 0x2F99DCu) {
        ctx->pc = 0x2F99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99D8u;
        // 0x2f99dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F99E0u;
        goto label_2f99e0;
    }
    ctx->pc = 0x2F99D8u;
    {
        const bool branch_taken_0x2f99d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F99DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99D8u;
        // 0x2f99dc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f99d8) {
            ctx->pc = 0x2F9A10u;
            goto label_2f9a10;
        }
    }
    ctx->pc = 0x2F99E0u;
label_2f99e0:
    // 0x2f99e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2f99e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2f99e4:
    // 0x2f99e4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f99e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f99e8:
    // 0x2f99e8: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f99e8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f99ec:
    // 0x2f99ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2f99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2f99f0:
    // 0x2f99f0: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x2f99f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2f99f4:
    // 0x2f99f4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x2f99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f99f8:
    // 0x2f99f8: 0xe0f809  jalr        $a3
label_2f99fc:
    if (ctx->pc == 0x2F99FCu) {
        ctx->pc = 0x2F99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99F8u;
        // 0x2f99fc: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A00u;
        goto label_2f9a00;
    }
    ctx->pc = 0x2F99F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2F9A00u);
        ctx->pc = 0x2F99FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F99F8u;
        // 0x2f99fc: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F99F8u, 0x2F9A00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9A00u;
label_2f9a00:
    // 0x2f9a00: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f9a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a04:
    // 0x2f9a04: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x2f9a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a08:
    // 0x2f9a08: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f9a08u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a0c:
    // 0x2f9a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f9a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9a10:
    // 0x2f9a10: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2f9a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2f9a14:
    // 0x2f9a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9a18:
    // 0x2f9a18: 0x3e00008  jr          $ra
label_2f9a1c:
    if (ctx->pc == 0x2F9A1Cu) {
        ctx->pc = 0x2F9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A18u;
        // 0x2f9a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9A20u;
        goto label_fallthrough_0x2f9a18;
    }
    ctx->pc = 0x2F9A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9A18u;
        // 0x2f9a1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f9a18:
    ctx->pc = 0x2F9A20u;
}
