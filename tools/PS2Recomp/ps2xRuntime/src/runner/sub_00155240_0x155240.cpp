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

// Function: sub_00155240
// Address: 0x155240 - 0x155300
void sub_00155240_0x155240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155240_0x155240");
#endif

    switch (ctx->pc) {
        case 0x15526cu: goto label_15526c;
        case 0x1552b8u: goto label_1552b8;
        default: break;
    }

    ctx->pc = 0x155240u;

    // 0x155240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x155244: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x155244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x155248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15524c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15524cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155254: 0x8c648b2c  lw          $a0, -0x74D4($v1)
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x155258: 0x8c8200e4  lw          $v0, 0xE4($a0)
    ctx->pc = 0x155258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x15525c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15525Cu;
    {
        const bool branch_taken_0x15525c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15525c) {
            ctx->pc = 0x155260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15525Cu;
            // 0x155260: 0x8c84006c  lw          $a0, 0x6C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x155270u;
            goto label_155270;
        }
    }
    ctx->pc = 0x155264u;
    // 0x155264: 0xc0644cc  jal         func_191330
    ctx->pc = 0x155264u;
    SET_GPR_U32(ctx, 31, 0x15526Cu);
    ctx->pc = 0x191330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191330u, 0x155264u, 0x15526Cu)) {
        return;
    }
    ctx->pc = 0x15526Cu;
label_15526c:
    // 0x15526c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15526cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_155270:
    // 0x155270: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x155270u;
    {
        const bool branch_taken_0x155270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155270u;
        // 0x155274: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155270) {
            ctx->pc = 0x1552E0u;
            goto label_1552e0;
        }
    }
    ctx->pc = 0x155278u;
    // 0x155278: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x15527c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155280: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155280u;
    {
        const bool branch_taken_0x155280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155280) {
            ctx->pc = 0x155284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155280u;
            // 0x155284: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552A0u;
            goto label_1552a0;
        }
    }
    ctx->pc = 0x155288u;
    // 0x155288: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x155288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x15528c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x155290: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155290u;
    {
        const bool branch_taken_0x155290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155290) {
            ctx->pc = 0x155294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155290u;
            // 0x155294: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552A0u;
            goto label_1552a0;
        }
    }
    ctx->pc = 0x155298u;
    // 0x155298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15529c: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x15529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_1552a0:
    // 0x1552a0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1552a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1552a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1552a8: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1552A8u;
    {
        const bool branch_taken_0x1552a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552a8) {
            ctx->pc = 0x1552ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1552A8u;
            // 0x1552ac: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552E8u;
            goto label_1552e8;
        }
    }
    ctx->pc = 0x1552B0u;
    // 0x1552b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1552b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1552b4: 0x0  nop
    ctx->pc = 0x1552b4u;
    // NOP
label_1552b8:
    // 0x1552b8: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1552B8u;
    {
        const bool branch_taken_0x1552b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1552BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552B8u;
        // 0x1552bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552b8) {
            ctx->pc = 0x1552ECu;
            goto label_1552ec;
        }
    }
    ctx->pc = 0x1552C0u;
    // 0x1552c0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1552c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1552c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1552c8: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x1552c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x1552cc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1552ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1552d0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1552D0u;
    {
        const bool branch_taken_0x1552d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1552d0) {
            ctx->pc = 0x1552D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1552D0u;
            // 0x1552d4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1552b8;
        }
    }
    ctx->pc = 0x1552D8u;
    // 0x1552d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1552D8u;
    {
        const bool branch_taken_0x1552d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552D8u;
        // 0x1552dc: 0x8e030048  lw          $v1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552d8) {
            ctx->pc = 0x1552E8u;
            goto label_1552e8;
        }
    }
    ctx->pc = 0x1552E0u;
label_1552e0:
    // 0x1552e0: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1552e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x1552e4: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1552e8:
    // 0x1552e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1552e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1552ec:
    // 0x1552ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1552ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1552f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1552f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1552F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1552F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552F4u;
        // 0x1552f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1552F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1552FCu;
    // 0x1552fc: 0x0  nop
    ctx->pc = 0x1552fcu;
    // NOP
    ctx->pc = 0x155300u;
}
