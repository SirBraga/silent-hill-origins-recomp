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

// Function: sub_001C61D0
// Address: 0x1c61d0 - 0x1c6280
void sub_001C61D0_0x1c61d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C61D0_0x1c61d0");
#endif

    switch (ctx->pc) {
        case 0x1c6208u: goto label_1c6208;
        case 0x1c621cu: goto label_1c621c;
        case 0x1c623cu: goto label_1c623c;
        case 0x1c6254u: goto label_1c6254;
        case 0x1c6264u: goto label_1c6264;
        default: break;
    }

    ctx->pc = 0x1c61d0u;

    // 0x1c61d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c61d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c61d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c61d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c61d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c61dc: 0x2442ec50  addiu       $v0, $v0, -0x13B0
    ctx->pc = 0x1c61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
    // 0x1c61e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c61e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c61e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c61ec: 0x26300284  addiu       $s0, $s1, 0x284
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x1c61f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c61f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1c61f4: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1c61f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c61f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c61fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6200: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1c6200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x1c6204: 0x0  nop
    ctx->pc = 0x1c6204u;
    // NOP
label_1c6208:
    // 0x1c6208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c620c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C620Cu;
    {
        const bool branch_taken_0x1c620c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C620Cu;
        // 0x1c6210: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c620c) {
            ctx->pc = 0x1C6220u;
            goto label_1c6220;
        }
    }
    ctx->pc = 0x1C6214u;
    // 0x1c6214: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C6214u;
    SET_GPR_U32(ctx, 31, 0x1C621Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C6214u, 0x1C621Cu)) {
        return;
    }
    ctx->pc = 0x1C621Cu;
label_1c621c:
    // 0x1c621c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c621cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c6220:
    // 0x1c6220: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C6220u;
    {
        const bool branch_taken_0x1c6220 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1C6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6220u;
        // 0x1c6224: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6220) {
            ctx->pc = 0x1C6208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6208;
        }
    }
    ctx->pc = 0x1C6228u;
    // 0x1c6228: 0x8e2403b4  lw          $a0, 0x3B4($s1)
    ctx->pc = 0x1c6228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x1c622c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C622Cu;
    {
        const bool branch_taken_0x1c622c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c622c) {
            ctx->pc = 0x1C6230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C622Cu;
            // 0x1c6230: 0x8e2403d4  lw          $a0, 0x3D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6244u;
            goto label_1c6244;
        }
    }
    ctx->pc = 0x1C6234u;
    // 0x1c6234: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1C6234u;
    SET_GPR_U32(ctx, 31, 0x1C623Cu);
    ctx->pc = 0x1C6238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6234u;
    // 0x1c6238: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1C6234u, 0x1C623Cu)) {
        return;
    }
    ctx->pc = 0x1C623Cu;
label_1c623c:
    // 0x1c623c: 0xae2003b4  sw          $zero, 0x3B4($s1)
    ctx->pc = 0x1c623cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 0));
    // 0x1c6240: 0x8e2403d4  lw          $a0, 0x3D4($s1)
    ctx->pc = 0x1c6240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 980)));
label_1c6244:
    // 0x1c6244: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6244u;
    {
        const bool branch_taken_0x1c6244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6244) {
            ctx->pc = 0x1C6248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6244u;
            // 0x1c6248: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C625Cu;
            goto label_1c625c;
        }
    }
    ctx->pc = 0x1C624Cu;
    // 0x1c624c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C624Cu;
    SET_GPR_U32(ctx, 31, 0x1C6254u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C624Cu, 0x1C6254u)) {
        return;
    }
    ctx->pc = 0x1C6254u;
label_1c6254:
    // 0x1c6254: 0xae2003d4  sw          $zero, 0x3D4($s1)
    ctx->pc = 0x1c6254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 980), GPR_U32(ctx, 0));
    // 0x1c6258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c625c:
    // 0x1c625c: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C625Cu;
    SET_GPR_U32(ctx, 31, 0x1C6264u);
    ctx->pc = 0x1C6260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C625Cu;
    // 0x1c6260: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C625Cu, 0x1C6264u)) {
        return;
    }
    ctx->pc = 0x1C6264u;
label_1c6264:
    // 0x1c6264: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c6264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c6268: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c6268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c626c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c626cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6270: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c6270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6278: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6278u;
        // 0x1c627c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6280u;
}
