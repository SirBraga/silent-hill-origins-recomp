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

// Function: sub_001C1780
// Address: 0x1c1780 - 0x1c1838
void sub_001C1780_0x1c1780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1780_0x1c1780");
#endif

    switch (ctx->pc) {
        case 0x1c17a0u: goto label_1c17a0;
        case 0x1c17a8u: goto label_1c17a8;
        case 0x1c17bcu: goto label_1c17bc;
        case 0x1c17c0u: goto label_1c17c0;
        case 0x1c1814u: goto label_1c1814;
        default: break;
    }

    ctx->pc = 0x1c1780u;

    // 0x1c1780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c1788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c178c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c178cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1790: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c1790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c1794: 0x8e300318  lw          $s0, 0x318($s1)
    ctx->pc = 0x1c1794u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
    // 0x1c1798: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1798u;
    {
        const bool branch_taken_0x1c1798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1798) {
            ctx->pc = 0x1C179Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1798u;
            // 0x1c179c: 0x26300314  addiu       $s0, $s1, 0x314 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C17BCu;
            goto label_1c17bc;
        }
    }
    ctx->pc = 0x1C17A0u;
label_1c17a0:
    // 0x1c17a0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C17A0u;
    SET_GPR_U32(ctx, 31, 0x1C17A8u);
    ctx->pc = 0x1C17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17A0u;
    // 0x1c17a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C17A0u, 0x1C17A8u)) {
        return;
    }
    ctx->pc = 0x1C17A8u;
label_1c17a8:
    // 0x1c17a8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1c17a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c17ac: 0x0  nop
    ctx->pc = 0x1c17acu;
    // NOP
    // 0x1c17b0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C17B0u;
    {
        const bool branch_taken_0x1c17b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c17b0) {
            ctx->pc = 0x1C17A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c17a0;
        }
    }
    ctx->pc = 0x1C17B8u;
    // 0x1c17b8: 0x26300314  addiu       $s0, $s1, 0x314
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 788));
label_1c17bc:
    // 0x1c17bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c17c0:
    // 0x1c17c0: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C17C0u;
    {
        const bool branch_taken_0x1c17c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17c0) {
            ctx->pc = 0x1C17C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C17C0u;
            // 0x1c17c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1824u;
            goto label_1c1824;
        }
    }
    ctx->pc = 0x1C17C8u;
    // 0x1c17c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c17cc: 0x0  nop
    ctx->pc = 0x1c17ccu;
    // NOP
    // 0x1c17d0: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C17D0u;
    {
        const bool branch_taken_0x1c17d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c17d0) {
            ctx->pc = 0x1C17C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c17c0;
        }
    }
    ctx->pc = 0x1C17D8u;
    // 0x1c17d8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c17dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C17DCu;
    {
        const bool branch_taken_0x1c17dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17DCu;
        // 0x1c17e0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17dc) {
            ctx->pc = 0x1C17F0u;
            goto label_1c17f0;
        }
    }
    ctx->pc = 0x1C17E4u;
    // 0x1c17e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C17E4u;
    {
        const bool branch_taken_0x1c17e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17E4u;
        // 0x1c17e8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17e4) {
            ctx->pc = 0x1C17F4u;
            goto label_1c17f4;
        }
    }
    ctx->pc = 0x1C17ECu;
    // 0x1c17ec: 0x0  nop
    ctx->pc = 0x1c17ecu;
    // NOP
label_1c17f0:
    // 0x1c17f0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c17f4:
    // 0x1c17f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1c17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c17f8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C17F8u;
    {
        const bool branch_taken_0x1c17f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17F8u;
        // 0x1c17fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17f8) {
            ctx->pc = 0x1C1808u;
            goto label_1c1808;
        }
    }
    ctx->pc = 0x1C1800u;
    // 0x1c1800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1800u;
    {
        const bool branch_taken_0x1c1800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1800u;
        // 0x1c1804: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1800) {
            ctx->pc = 0x1C180Cu;
            goto label_1c180c;
        }
    }
    ctx->pc = 0x1C1808u;
label_1c1808:
    // 0x1c1808: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1c1808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1c180c:
    // 0x1c180c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C180Cu;
    SET_GPR_U32(ctx, 31, 0x1C1814u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C180Cu, 0x1C1814u)) {
        return;
    }
    ctx->pc = 0x1C1814u;
label_1c1814:
    // 0x1c1814: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c1814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c181c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1C181Cu;
    {
        const bool branch_taken_0x1c181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C181Cu;
        // 0x1c1820: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c181c) {
            ctx->pc = 0x1C17BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c17bc;
        }
    }
    ctx->pc = 0x1C1824u;
label_1c1824:
    // 0x1c1824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c182c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C182Cu;
        // 0x1c1830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1834u;
    // 0x1c1834: 0x0  nop
    ctx->pc = 0x1c1834u;
    // NOP
    ctx->pc = 0x1c1838u;
}
