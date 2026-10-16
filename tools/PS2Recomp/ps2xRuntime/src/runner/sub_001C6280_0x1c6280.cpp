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

// Function: sub_001C6280
// Address: 0x1c6280 - 0x1c6328
void sub_001C6280_0x1c6280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6280_0x1c6280");
#endif

    switch (ctx->pc) {
        case 0x1c6294u: goto label_1c6294;
        case 0x1c629cu: goto label_1c629c;
        case 0x1c62a4u: goto label_1c62a4;
        case 0x1c62a8u: goto label_1c62a8;
        case 0x1c6300u: goto label_1c6300;
        case 0x1c6314u: goto label_1c6314;
        default: break;
    }

    ctx->pc = 0x1c6280u;

    // 0x1c6280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6284: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c6288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c628c: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1C628Cu;
    SET_GPR_U32(ctx, 31, 0x1C6294u);
    ctx->pc = 0x1C6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C628Cu;
    // 0x1c6290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C628Cu, 0x1C6294u)) {
        return;
    }
    ctx->pc = 0x1C6294u;
label_1c6294:
    // 0x1c6294: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1C6294u;
    SET_GPR_U32(ctx, 31, 0x1C629Cu);
    ctx->pc = 0x1C6298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6294u;
    // 0x1c6298: 0x8e0403b4  lw          $a0, 0x3B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1C6294u, 0x1C629Cu)) {
        return;
    }
    ctx->pc = 0x1C629Cu;
label_1c629c:
    // 0x1c629c: 0xc07158c  jal         func_1C5630
    ctx->pc = 0x1C629Cu;
    SET_GPR_U32(ctx, 31, 0x1C62A4u);
    ctx->pc = 0x1C62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C629Cu;
    // 0x1c62a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C5630u, 0x1C629Cu, 0x1C62A4u)) {
        return;
    }
    ctx->pc = 0x1C62A4u;
label_1c62a4:
    // 0x1c62a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c62a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c62a8:
    // 0x1c62a8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c62ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c62acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c62b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c62b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c62b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c62b8: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1c62b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c62bc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C62BCu;
    {
        const bool branch_taken_0x1c62bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C62C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C62BCu;
        // 0x1c62c0: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c62bc) {
            ctx->pc = 0x1C62A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C62C4u;
    // 0x1c62c4: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c62c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c62c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c62cc: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x1c62ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x1c62d0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1c62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c62d4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1c62d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1c62d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c62dc: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c62e0: 0xac6001d0  sw          $zero, 0x1D0($v1)
    ctx->pc = 0x1c62e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 0));
    // 0x1c62e4: 0xae0003d8  sw          $zero, 0x3D8($s0)
    ctx->pc = 0x1c62e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 984), GPR_U32(ctx, 0));
    // 0x1c62e8: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x1c62e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x1c62ec: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1c62ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x1c62f0: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x1c62f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x1c62f4: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x1c62f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x1c62f8: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C62F8u;
    SET_GPR_U32(ctx, 31, 0x1C6300u);
    ctx->pc = 0x1C62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C62F8u;
    // 0x1c62fc: 0x8c4498dc  lw          $a0, -0x6724($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940892)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C62F8u, 0x1C6300u)) {
        return;
    }
    ctx->pc = 0x1C6300u;
label_1c6300:
    // 0x1c6300: 0xae0203dc  sw          $v0, 0x3DC($s0)
    ctx->pc = 0x1c6300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 988), GPR_U32(ctx, 2));
    // 0x1c6304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6308: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c6308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c630c: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C630Cu;
    SET_GPR_U32(ctx, 31, 0x1C6314u);
    ctx->pc = 0x1C6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C630Cu;
    // 0x1c6310: 0x8c4498e0  lw          $a0, -0x6720($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C630Cu, 0x1C6314u)) {
        return;
    }
    ctx->pc = 0x1C6314u;
label_1c6314:
    // 0x1c6314: 0xae0203e0  sw          $v0, 0x3E0($s0)
    ctx->pc = 0x1c6314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 2));
    // 0x1c6318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c6318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c631c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c631cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6320: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6320u;
        // 0x1c6324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6328u;
}
