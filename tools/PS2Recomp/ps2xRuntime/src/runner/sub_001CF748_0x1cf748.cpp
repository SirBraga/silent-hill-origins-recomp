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

// Function: sub_001CF748
// Address: 0x1cf748 - 0x1cf808
void sub_001CF748_0x1cf748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF748_0x1cf748");
#endif

    switch (ctx->pc) {
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7f4u: goto label_1cf7f4;
        default: break;
    }

    ctx->pc = 0x1cf748u;

    // 0x1cf748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf74c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cf74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cf750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf754: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf75c: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_1cf760:
    // 0x1cf760: 0xc05fa08  jal         func_17E820
    ctx->pc = 0x1CF760u;
    SET_GPR_U32(ctx, 31, 0x1CF768u);
    ctx->pc = 0x1CF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF760u;
    // 0x1cf764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E820u, 0x1CF760u, 0x1CF768u)) {
        return;
    }
    ctx->pc = 0x1CF768u;
label_1cf768:
    // 0x1cf768: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CF768u;
    {
        const bool branch_taken_0x1cf768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf768) {
            ctx->pc = 0x1CF76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF768u;
            // 0x1cf76c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF7BCu;
            goto label_1cf7bc;
        }
    }
    ctx->pc = 0x1CF770u;
    // 0x1cf770: 0xc0601d0  jal         func_180740
    ctx->pc = 0x1CF770u;
    SET_GPR_U32(ctx, 31, 0x1CF778u);
    ctx->pc = 0x1CF774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF770u;
    // 0x1cf774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180740u, 0x1CF770u, 0x1CF778u)) {
        return;
    }
    ctx->pc = 0x1CF778u;
label_1cf778:
    // 0x1cf778: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF778u;
    {
        const bool branch_taken_0x1cf778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf778) {
            ctx->pc = 0x1CF77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF778u;
            // 0x1cf77c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF7BCu;
            goto label_1cf7bc;
        }
    }
    ctx->pc = 0x1CF780u;
    // 0x1cf780: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x1cf780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cf784: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF784u;
    {
        const bool branch_taken_0x1cf784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF784u;
        // 0x1cf788: 0x8c460048  lw          $a2, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf784) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF78Cu;
    // 0x1cf78c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1cf78cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf790: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF790u;
    {
        const bool branch_taken_0x1cf790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf790) {
            ctx->pc = 0x1CF794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF790u;
            // 0x1cf794: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF7BCu;
            goto label_1cf7bc;
        }
    }
    ctx->pc = 0x1CF798u;
    // 0x1cf798: 0x50c00008  beql        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF798u;
    {
        const bool branch_taken_0x1cf798 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf798) {
            ctx->pc = 0x1CF79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF798u;
            // 0x1cf79c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF7BCu;
            goto label_1cf7bc;
        }
    }
    ctx->pc = 0x1CF7A0u;
    // 0x1cf7a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cf7a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF7A4u;
    {
        const bool branch_taken_0x1cf7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A4u;
        // 0x1cf7a8: 0x8e248b2c  lw          $a0, -0x74D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7a4) {
            ctx->pc = 0x1CF7B8u;
            goto label_1cf7b8;
        }
    }
    ctx->pc = 0x1CF7ACu;
    // 0x1cf7ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf7b0: 0xc0636ea  jal         func_18DBA8
    ctx->pc = 0x1CF7B0u;
    SET_GPR_U32(ctx, 31, 0x1CF7B8u);
    ctx->pc = 0x1CF7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7B0u;
    // 0x1cf7b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18DBA8u, 0x1CF7B0u, 0x1CF7B8u)) {
        return;
    }
    ctx->pc = 0x1CF7B8u;
label_1cf7b8:
    // 0x1cf7b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf7bc:
    // 0x1cf7bc: 0x2a020016  slti        $v0, $s0, 0x16
    ctx->pc = 0x1cf7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1cf7c0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CF7C0u;
    {
        const bool branch_taken_0x1cf7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7C0u;
        // 0x1cf7c4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7c0) {
            ctx->pc = 0x1CF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf760;
        }
    }
    ctx->pc = 0x1CF7C8u;
    // 0x1cf7c8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cf7cc: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x1cf7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x1cf7d0: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1cf7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1cf7d4: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x1cf7d8: 0x24a50888  addiu       $a1, $a1, 0x888
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2184));
    // 0x1cf7dc: 0x250899d8  addiu       $t0, $t0, -0x6628
    ctx->pc = 0x1cf7dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941144));
    // 0x1cf7e0: 0x252999f0  addiu       $t1, $t1, -0x6610
    ctx->pc = 0x1cf7e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941168));
    // 0x1cf7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7ec: 0xc05e7fe  jal         func_179FF8
    ctx->pc = 0x1CF7ECu;
    SET_GPR_U32(ctx, 31, 0x1CF7F4u);
    ctx->pc = 0x1CF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF7ECu;
    // 0x1cf7f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179FF8u, 0x1CF7ECu, 0x1CF7F4u)) {
        return;
    }
    ctx->pc = 0x1CF7F4u;
label_1cf7f4:
    // 0x1cf7f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cf7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf7f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cf7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf7fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf800: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF800u;
        // 0x1cf804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF808u;
}
