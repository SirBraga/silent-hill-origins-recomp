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

// Function: sub_001FF188
// Address: 0x1ff188 - 0x1ff260
void sub_001FF188_0x1ff188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF188_0x1ff188");
#endif

    switch (ctx->pc) {
        case 0x1ff1dcu: goto label_1ff1dc;
        case 0x1ff1ecu: goto label_1ff1ec;
        case 0x1ff1fcu: goto label_1ff1fc;
        case 0x1ff218u: goto label_1ff218;
        case 0x1ff24cu: goto label_1ff24c;
        default: break;
    }

    ctx->pc = 0x1ff188u;

    // 0x1ff188: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ff18c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ff18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1ff190: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ff190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ff194: 0x244235d0  addiu       $v0, $v0, 0x35D0
    ctx->pc = 0x1ff194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13776));
    // 0x1ff198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff19c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ff19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ff1a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ff1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ff1a4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1ff1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1ff1a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ff1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ff1ac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1ff1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1ff1b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ff1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1b4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1ff1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1ff1b8: 0x8c841a88  lw          $a0, 0x1A88($a0)
    ctx->pc = 0x1ff1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A88u));
    // 0x1ff1bc: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1ff1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x1ff1c0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF1C0u;
    {
        const bool branch_taken_0x1ff1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF1C0u;
        // 0x1ff1c4: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff1c0) {
            ctx->pc = 0x1FF1DCu;
            goto label_1ff1dc;
        }
    }
    ctx->pc = 0x1FF1C8u;
    // 0x1ff1c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff1cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF1CCu;
    {
        const bool branch_taken_0x1ff1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1cc) {
            ctx->pc = 0x1FF1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF1CCu;
            // 0x1ff1d0: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF1E0u;
            goto label_1ff1e0;
        }
    }
    ctx->pc = 0x1FF1D4u;
    // 0x1ff1d4: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1FF1D4u;
    SET_GPR_U32(ctx, 31, 0x1FF1DCu);
    ctx->pc = 0x1FF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1D4u;
    // 0x1ff1d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1FF1D4u, 0x1FF1DCu)) {
        return;
    }
    ctx->pc = 0x1FF1DCu;
label_1ff1dc:
    // 0x1ff1dc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1ff1e0:
    // 0x1ff1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1FF1E4u;
    SET_GPR_U32(ctx, 31, 0x1FF1ECu);
    ctx->pc = 0x1FF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1E4u;
    // 0x1ff1e8: 0x24a51a78  addiu       $a1, $a1, 0x1A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1FF1E4u, 0x1FF1ECu)) {
        return;
    }
    ctx->pc = 0x1FF1ECu;
label_1ff1ec:
    // 0x1ff1ec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1ff1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1ff1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff1f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1FF1F4u;
    SET_GPR_U32(ctx, 31, 0x1FF1FCu);
    ctx->pc = 0x1FF1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF1F4u;
    // 0x1ff1f8: 0x24a51a80  addiu       $a1, $a1, 0x1A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1FF1F4u, 0x1FF1FCu)) {
        return;
    }
    ctx->pc = 0x1FF1FCu;
label_1ff1fc:
    // 0x1ff1fc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1ff1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1ff200: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x1ff200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0128u));
    // 0x1ff204: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF204u;
    {
        const bool branch_taken_0x1ff204 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1FF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF204u;
        // 0x1ff208: 0x32250001  andi        $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff204) {
            ctx->pc = 0x1FF23Cu;
            goto label_1ff23c;
        }
    }
    ctx->pc = 0x1FF20Cu;
    // 0x1ff20c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ff210: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ff210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff214: 0x24432898  addiu       $v1, $v0, 0x2898
    ctx->pc = 0x1ff214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10392));
label_1ff218:
    // 0x1ff218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ff218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ff21c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF21Cu;
    {
        const bool branch_taken_0x1ff21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff21c) {
            ctx->pc = 0x1FF220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF21Cu;
            // 0x1ff220: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF234u;
            goto label_1ff234;
        }
    }
    ctx->pc = 0x1FF224u;
    // 0x1ff224: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ff224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ff228: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FF228u;
    {
        const bool branch_taken_0x1ff228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1ff228) {
            ctx->pc = 0x1FF22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF228u;
            // 0x1ff22c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF230u;
            goto label_1ff230;
        }
    }
    ctx->pc = 0x1FF230u;
label_1ff230:
    // 0x1ff230: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ff230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ff234:
    // 0x1ff234: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FF234u;
    {
        const bool branch_taken_0x1ff234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF234u;
        // 0x1ff238: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff234) {
            ctx->pc = 0x1FF218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff218;
        }
    }
    ctx->pc = 0x1FF23Cu;
label_1ff23c:
    // 0x1ff23c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF23Cu;
    {
        const bool branch_taken_0x1ff23c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff23c) {
            ctx->pc = 0x1FF240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF23Cu;
            // 0x1ff240: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF250u;
            goto label_1ff250;
        }
    }
    ctx->pc = 0x1FF244u;
    // 0x1ff244: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1FF244u;
    SET_GPR_U32(ctx, 31, 0x1FF24Cu);
    ctx->pc = 0x1FF248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF244u;
    // 0x1ff248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1FF244u, 0x1FF24Cu)) {
        return;
    }
    ctx->pc = 0x1FF24Cu;
label_1ff24c:
    // 0x1ff24c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ff24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ff250:
    // 0x1ff250: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ff250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ff254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff258: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF258u;
        // 0x1ff25c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF260u;
}
