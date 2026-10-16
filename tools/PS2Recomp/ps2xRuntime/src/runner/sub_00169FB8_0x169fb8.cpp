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

// Function: sub_00169FB8
// Address: 0x169fb8 - 0x16a060
void sub_00169FB8_0x169fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169FB8_0x169fb8");
#endif

    switch (ctx->pc) {
        case 0x169fd8u: goto label_169fd8;
        case 0x16a010u: goto label_16a010;
        case 0x16a034u: goto label_16a034;
        default: break;
    }

    ctx->pc = 0x169fb8u;

    // 0x169fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x169fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x169fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169fcc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x169fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x169fd0: 0xc05a818  jal         func_16A060
    ctx->pc = 0x169FD0u;
    SET_GPR_U32(ctx, 31, 0x169FD8u);
    ctx->pc = 0x169FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169FD0u;
    // 0x169fd4: 0x24844410  addiu       $a0, $a0, 0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16A060u, 0x169FD0u, 0x169FD8u)) {
        return;
    }
    ctx->pc = 0x169FD8u;
label_169fd8:
    // 0x169fd8: 0x86020052  lh          $v0, 0x52($s0)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x169fdc: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x169FDCu;
    {
        const bool branch_taken_0x169fdc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x169FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FDCu;
        // 0x169fe0: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fdc) {
            ctx->pc = 0x16A034u;
            goto label_16a034;
        }
    }
    ctx->pc = 0x169FE4u;
    // 0x169fe4: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x169fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x169fe8: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x169fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
    // 0x169fec: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x169FECu;
    {
        const bool branch_taken_0x169fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x169FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FECu;
        // 0x169ff0: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fec) {
            ctx->pc = 0x16A014u;
            goto label_16a014;
        }
    }
    ctx->pc = 0x169FF4u;
    // 0x169ff4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169ff8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169FF8u;
    {
        const bool branch_taken_0x169ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FF8u;
        // 0x169ffc: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ff8) {
            ctx->pc = 0x16A014u;
            goto label_16a014;
        }
    }
    ctx->pc = 0x16A000u;
    // 0x16a000: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16a000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16a004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16a004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a008: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x16A008u;
    SET_GPR_U32(ctx, 31, 0x16A010u);
    ctx->pc = 0x16A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A008u;
    // 0x16a00c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x16A008u, 0x16A010u)) {
        return;
    }
    ctx->pc = 0x16A010u;
label_16a010:
    // 0x16a010: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_16a014:
    // 0x16a014: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x16a018: 0x24454430  addiu       $a1, $v0, 0x4430
    ctx->pc = 0x16a018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 17456));
    // 0x16a01c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A01Cu;
    {
        const bool branch_taken_0x16a01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A01Cu;
        // 0x16a020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a01c) {
            ctx->pc = 0x16A028u;
            goto label_16a028;
        }
    }
    ctx->pc = 0x16A024u;
    // 0x16a024: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x16a024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_16a028:
    // 0x16a028: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a02c: 0xc05a47c  jal         func_1691F0
    ctx->pc = 0x16A02Cu;
    SET_GPR_U32(ctx, 31, 0x16A034u);
    ctx->pc = 0x16A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A02Cu;
    // 0x16a030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x16A02Cu, 0x16A034u)) {
        return;
    }
    ctx->pc = 0x16A034u;
label_16a034:
    // 0x16a034: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x16a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x16a038: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16A038u;
    {
        const bool branch_taken_0x16a038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a038) {
            ctx->pc = 0x16A03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A038u;
            // 0x16a03c: 0xae000068  sw          $zero, 0x68($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A040u;
            goto label_16a040;
        }
    }
    ctx->pc = 0x16A040u;
label_16a040:
    // 0x16a040: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x16a040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x16a044: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a048: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a04c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A04Cu;
        // 0x16a050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A054u;
    // 0x16a054: 0x0  nop
    ctx->pc = 0x16a054u;
    // NOP
    // 0x16a058: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a05c: 0x0  nop
    ctx->pc = 0x16a05cu;
    // NOP
    ctx->pc = 0x16a060u;
}
