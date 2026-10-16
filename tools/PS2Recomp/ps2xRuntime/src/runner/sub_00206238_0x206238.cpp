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

// Function: sub_00206238
// Address: 0x206238 - 0x2062d0
void sub_00206238_0x206238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206238_0x206238");
#endif

    switch (ctx->pc) {
        case 0x206268u: goto label_206268;
        case 0x2062a8u: goto label_2062a8;
        default: break;
    }

    ctx->pc = 0x206238u;

    // 0x206238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20623c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x20623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x206240: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x206244: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x206244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x206248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20624c: 0x24505570  addiu       $s0, $v0, 0x5570
    ctx->pc = 0x20624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21872));
    // 0x206250: 0x24633ee8  addiu       $v1, $v1, 0x3EE8
    ctx->pc = 0x206250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16104));
    // 0x206254: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206254u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735574u));
    // 0x206258: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x206258u;
    {
        const bool branch_taken_0x206258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206258u;
        // 0x20625c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206258) {
            ctx->pc = 0x2062C0u;
            goto label_2062c0;
        }
    }
    ctx->pc = 0x206260u;
    // 0x206260: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x206260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x206264: 0x0  nop
    ctx->pc = 0x206264u;
    // NOP
label_206268:
    // 0x206268: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x206268u;
    {
        const bool branch_taken_0x206268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206268) {
            ctx->pc = 0x20626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206268u;
            // 0x20626c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2062B8u;
            goto label_2062b8;
        }
    }
    ctx->pc = 0x206270u;
    // 0x206270: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x206274: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206274u;
    {
        const bool branch_taken_0x206274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206274u;
        // 0x206278: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206274) {
            ctx->pc = 0x206284u;
            goto label_206284;
        }
    }
    ctx->pc = 0x20627Cu;
    // 0x20627c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20627Cu;
    {
        const bool branch_taken_0x20627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20627Cu;
        // 0x206280: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20627c) {
            ctx->pc = 0x206288u;
            goto label_206288;
        }
    }
    ctx->pc = 0x206284u;
label_206284:
    // 0x206284: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x206284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_206288:
    // 0x206288: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x206288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20628c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20628Cu;
    {
        const bool branch_taken_0x20628c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x206290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20628Cu;
        // 0x206290: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20628c) {
            ctx->pc = 0x20629Cu;
            goto label_20629c;
        }
    }
    ctx->pc = 0x206294u;
    // 0x206294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x206294u;
    {
        const bool branch_taken_0x206294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206294u;
        // 0x206298: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206294) {
            ctx->pc = 0x2062A0u;
            goto label_2062a0;
        }
    }
    ctx->pc = 0x20629Cu;
label_20629c:
    // 0x20629c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x20629cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_2062a0:
    // 0x2062a0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x2062A0u;
    SET_GPR_U32(ctx, 31, 0x2062A8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x2062A0u, 0x2062A8u)) {
        return;
    }
    ctx->pc = 0x2062A8u;
label_2062a8:
    // 0x2062a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2062a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2062ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2062acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2062b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2062b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2062b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2062b8:
    // 0x2062b8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2062B8u;
    {
        const bool branch_taken_0x2062b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2062b8) {
            ctx->pc = 0x2062BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2062B8u;
            // 0x2062bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206268;
        }
    }
    ctx->pc = 0x2062C0u;
label_2062c0:
    // 0x2062c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2062c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2062c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2062c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2062c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2062C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2062CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2062C8u;
        // 0x2062cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2062C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2062D0u;
}
