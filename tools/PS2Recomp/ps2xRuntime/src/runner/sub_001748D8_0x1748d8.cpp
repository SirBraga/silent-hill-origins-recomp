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

// Function: sub_001748D8
// Address: 0x1748d8 - 0x174958
void sub_001748D8_0x1748d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001748D8_0x1748d8");
#endif

    switch (ctx->pc) {
        case 0x174914u: goto label_174914;
        case 0x17494cu: goto label_17494c;
        default: break;
    }

    ctx->pc = 0x1748d8u;

    // 0x1748d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1748dc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1748DCu;
    {
        const bool branch_taken_0x1748dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1748E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748DCu;
        // 0x1748e0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748dc) {
            ctx->pc = 0x17491Cu;
            goto label_17491c;
        }
    }
    ctx->pc = 0x1748E4u;
    // 0x1748e4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1748e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1748e8: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x1748e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1748ec: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1748ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1748f0: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1748F0u;
    {
        const bool branch_taken_0x1748f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1748F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1748F0u;
        // 0x1748f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1748f0) {
            ctx->pc = 0x174950u;
            goto label_174950;
        }
    }
    ctx->pc = 0x1748F8u;
    // 0x1748f8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1748f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1748fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1748FCu;
    {
        const bool branch_taken_0x1748fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1748fc) {
            ctx->pc = 0x174950u;
            goto label_174950;
        }
    }
    ctx->pc = 0x174904u;
    // 0x174904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x174904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x174908: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17490c: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x17490Cu;
    SET_GPR_U32(ctx, 31, 0x174914u);
    ctx->pc = 0x174910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17490Cu;
    // 0x174910: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17490Cu, 0x174914u)) {
        return;
    }
    ctx->pc = 0x174914u;
label_174914:
    // 0x174914: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x174914u;
    {
        const bool branch_taken_0x174914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174914u;
        // 0x174918: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174914) {
            ctx->pc = 0x174950u;
            goto label_174950;
        }
    }
    ctx->pc = 0x17491Cu;
label_17491c:
    // 0x17491c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17491cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x174920: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x174920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x174924: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x174924u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x174928: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174928u;
    {
        const bool branch_taken_0x174928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174928u;
        // 0x17492c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174928) {
            ctx->pc = 0x174950u;
            goto label_174950;
        }
    }
    ctx->pc = 0x174930u;
    // 0x174930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x174930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174934: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x174934u;
    {
        const bool branch_taken_0x174934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174934) {
            ctx->pc = 0x174950u;
            goto label_174950;
        }
    }
    ctx->pc = 0x17493Cu;
    // 0x17493c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x174940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x174940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174944: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x174944u;
    SET_GPR_U32(ctx, 31, 0x17494Cu);
    ctx->pc = 0x174948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174944u;
    // 0x174948: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x174944u, 0x17494Cu)) {
        return;
    }
    ctx->pc = 0x17494Cu;
label_17494c:
    // 0x17494c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17494cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174950:
    // 0x174950: 0x3e00008  jr          $ra
    ctx->pc = 0x174950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174950u;
        // 0x174954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174958u;
}
