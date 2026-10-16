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

// Function: sub_001B8218
// Address: 0x1b8218 - 0x1b82d8
void sub_001B8218_0x1b8218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8218_0x1b8218");
#endif

    switch (ctx->pc) {
        case 0x1b8250u: goto label_1b8250;
        case 0x1b8254u: goto label_1b8254;
        case 0x1b82a4u: goto label_1b82a4;
        case 0x1b82bcu: goto label_1b82bc;
        default: break;
    }

    ctx->pc = 0x1b8218u;

    // 0x1b8218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b821c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b8220: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b8220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b8224: 0x2442cc48  addiu       $v0, $v0, -0x33B8
    ctx->pc = 0x1b8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954056));
    // 0x1b8228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b8228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b822c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b822cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b8230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b8234: 0x26300270  addiu       $s0, $s1, 0x270
    ctx->pc = 0x1b8234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    // 0x1b8238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b823c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b8240: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1b8240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1b8244: 0x2463cd58  addiu       $v1, $v1, -0x32A8
    ctx->pc = 0x1b8244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954328));
    // 0x1b8248: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b8248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b824c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b824cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1b8250:
    // 0x1b8250: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b8254:
    // 0x1b8254: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B8254u;
    {
        const bool branch_taken_0x1b8254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8254u;
        // 0x1b8258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8254) {
            ctx->pc = 0x1B82B4u;
            goto label_1b82b4;
        }
    }
    ctx->pc = 0x1B825Cu;
    // 0x1b825c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b8260: 0x0  nop
    ctx->pc = 0x1b8260u;
    // NOP
    // 0x1b8264: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B8264u;
    {
        const bool branch_taken_0x1b8264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8264) {
            ctx->pc = 0x1B8254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8254;
        }
    }
    ctx->pc = 0x1B826Cu;
    // 0x1b826c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b8270: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8270u;
    {
        const bool branch_taken_0x1b8270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8270u;
        // 0x1b8274: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8270) {
            ctx->pc = 0x1B8280u;
            goto label_1b8280;
        }
    }
    ctx->pc = 0x1B8278u;
    // 0x1b8278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8278u;
    {
        const bool branch_taken_0x1b8278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8278u;
        // 0x1b827c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8278) {
            ctx->pc = 0x1B8284u;
            goto label_1b8284;
        }
    }
    ctx->pc = 0x1B8280u;
label_1b8280:
    // 0x1b8280: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b8280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b8284:
    // 0x1b8284: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b8288: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8288u;
    {
        const bool branch_taken_0x1b8288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8288u;
        // 0x1b828c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8288) {
            ctx->pc = 0x1B8298u;
            goto label_1b8298;
        }
    }
    ctx->pc = 0x1B8290u;
    // 0x1b8290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8290u;
    {
        const bool branch_taken_0x1b8290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8290u;
        // 0x1b8294: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8290) {
            ctx->pc = 0x1B829Cu;
            goto label_1b829c;
        }
    }
    ctx->pc = 0x1B8298u;
label_1b8298:
    // 0x1b8298: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1b8298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1b829c:
    // 0x1b829c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B829Cu;
    SET_GPR_U32(ctx, 31, 0x1B82A4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B829Cu, 0x1B82A4u)) {
        return;
    }
    ctx->pc = 0x1B82A4u;
label_1b82a4:
    // 0x1b82a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b82a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b82a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b82ac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B82ACu;
    {
        const bool branch_taken_0x1b82ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82ACu;
        // 0x1b82b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b82ac) {
            ctx->pc = 0x1B8250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8250;
        }
    }
    ctx->pc = 0x1B82B4u;
label_1b82b4:
    // 0x1b82b4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1B82B4u;
    SET_GPR_U32(ctx, 31, 0x1B82BCu);
    ctx->pc = 0x1B82B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B82B4u;
    // 0x1b82b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1B82B4u, 0x1B82BCu)) {
        return;
    }
    ctx->pc = 0x1B82BCu;
label_1b82bc:
    // 0x1b82bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b82bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b82c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b82c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b82c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b82c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b82c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b82c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b82cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B82D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B82CCu;
        // 0x1b82d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82D4u;
    // 0x1b82d4: 0x0  nop
    ctx->pc = 0x1b82d4u;
    // NOP
    ctx->pc = 0x1b82d8u;
}
