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

// Function: sub_001533A0
// Address: 0x1533a0 - 0x153450
void sub_001533A0_0x1533a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001533A0_0x1533a0");
#endif

    switch (ctx->pc) {
        case 0x1533fcu: goto label_1533fc;
        case 0x153440u: goto label_153440;
        default: break;
    }

    ctx->pc = 0x1533a0u;

    // 0x1533a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1533a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1533a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1533a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1533a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1533a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1533ac: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1533acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1533b0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1533B0u;
    {
        const bool branch_taken_0x1533b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533B0u;
        // 0x1533b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533b0) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x1533B8u;
    // 0x1533b8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x1533b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1533bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1533BCu;
    {
        const bool branch_taken_0x1533bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1533C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533BCu;
        // 0x1533c0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533bc) {
            ctx->pc = 0x1533D0u;
            goto label_1533d0;
        }
    }
    ctx->pc = 0x1533C4u;
    // 0x1533c4: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1533c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x1533c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1533C8u;
    {
        const bool branch_taken_0x1533c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533C8u;
        // 0x1533cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533c8) {
            ctx->pc = 0x153404u;
            goto label_153404;
        }
    }
    ctx->pc = 0x1533D0u;
label_1533d0:
    // 0x1533d0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1533d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1533d4: 0x8c4543b0  lw          $a1, 0x43B0($v0)
    ctx->pc = 0x1533d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17328)));
    // 0x1533d8: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1533d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1533dc: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1533DCu;
    {
        const bool branch_taken_0x1533dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1533E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533DCu;
        // 0x1533e0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533dc) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x1533E4u;
    // 0x1533e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1533e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1533e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1533E8u;
    {
        const bool branch_taken_0x1533e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533E8u;
        // 0x1533ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533e8) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x1533F0u;
    // 0x1533f0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1533f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1533f4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1533F4u;
    SET_GPR_U32(ctx, 31, 0x1533FCu);
    ctx->pc = 0x1533F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533F4u;
    // 0x1533f8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1533F4u, 0x1533FCu)) {
        return;
    }
    ctx->pc = 0x1533FCu;
label_1533fc:
    // 0x1533fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1533FCu;
    {
        const bool branch_taken_0x1533fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533FCu;
        // 0x153400: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533fc) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x153404u;
label_153404:
    // 0x153404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153408: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x153408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x15340c: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x15340cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
    // 0x153410: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x153410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x153414: 0x8c8443a0  lw          $a0, 0x43A0($a0)
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B43A0u));
    // 0x153418: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x15341c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15341Cu;
    {
        const bool branch_taken_0x15341c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x153420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15341Cu;
        // 0x153420: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15341c) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x153424u;
    // 0x153424: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x153424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x153428: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153428u;
    {
        const bool branch_taken_0x153428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153428) {
            ctx->pc = 0x153444u;
            goto label_153444;
        }
    }
    ctx->pc = 0x153430u;
    // 0x153430: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x153430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x153434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x153434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153438: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x153438u;
    SET_GPR_U32(ctx, 31, 0x153440u);
    ctx->pc = 0x15343Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153438u;
    // 0x15343c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x153438u, 0x153440u)) {
        return;
    }
    ctx->pc = 0x153440u;
label_153440:
    // 0x153440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_153444:
    // 0x153444: 0x3e00008  jr          $ra
    ctx->pc = 0x153444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153444u;
        // 0x153448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15344Cu;
    // 0x15344c: 0x0  nop
    ctx->pc = 0x15344cu;
    // NOP
    ctx->pc = 0x153450u;
}
