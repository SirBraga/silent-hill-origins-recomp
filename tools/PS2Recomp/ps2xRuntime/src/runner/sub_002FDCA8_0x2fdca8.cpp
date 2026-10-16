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

// Function: sub_002FDCA8
// Address: 0x2fdca8 - 0x2fdd70
void sub_002FDCA8_0x2fdca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDCA8_0x2fdca8");
#endif

    switch (ctx->pc) {
        case 0x2fdcc4u: goto label_2fdcc4;
        case 0x2fdcd8u: goto label_2fdcd8;
        case 0x2fdcfcu: goto label_2fdcfc;
        case 0x2fdd04u: goto label_2fdd04;
        case 0x2fdd54u: goto label_2fdd54;
        default: break;
    }

    ctx->pc = 0x2fdca8u;

    // 0x2fdca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fdca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fdcac: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2fdcacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2fdcb0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2fdcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2fdcb4: 0x24a50780  addiu       $a1, $a1, 0x780
    ctx->pc = 0x2fdcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1920));
    // 0x2fdcb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fdcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fdcbc: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x2FDCBCu;
    SET_GPR_U32(ctx, 31, 0x2FDCC4u);
    ctx->pc = 0x2FDCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCBCu;
    // 0x2fdcc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x2FDCBCu, 0x2FDCC4u)) {
        return;
    }
    ctx->pc = 0x2FDCC4u;
label_2fdcc4:
    // 0x2fdcc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fdcc8: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2fdcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2fdccc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fdcd0: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FDCD0u;
    SET_GPR_U32(ctx, 31, 0x2FDCD8u);
    ctx->pc = 0x2FDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCD0u;
    // 0x2fdcd4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FDCD0u, 0x2FDCD8u)) {
        return;
    }
    ctx->pc = 0x2FDCD8u;
label_2fdcd8:
    // 0x2fdcd8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2fdcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdcdc: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x2fdcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x2fdce0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x2fdce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x2fdce4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2fdce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2fdce8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2fdce8u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x2fdcec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fdcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fdcf0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fdcf4: 0xc0be66a  jal         func_2F99A8
    ctx->pc = 0x2FDCF4u;
    SET_GPR_U32(ctx, 31, 0x2FDCFCu);
    ctx->pc = 0x2FDCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDCF4u;
    // 0x2fdcf8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F99A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F99A8u, 0x2FDCF4u, 0x2FDCFCu)) {
        return;
    }
    ctx->pc = 0x2FDCFCu;
label_2fdcfc:
    // 0x2fdcfc: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x2FDCFCu;
    SET_GPR_U32(ctx, 31, 0x2FDD04u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x2FDCFCu, 0x2FDD04u)) {
        return;
    }
    ctx->pc = 0x2FDD04u;
label_2fdd04:
    // 0x2fdd04: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2fdd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdd08: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x2fdd08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdd0c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x2fdd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x2fdd10: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x2fdd10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x2fdd14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fdd14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2fdd18: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x2fdd18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x2fdd1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2fdd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2fdd20: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x2fdd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x2fdd24: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2fdd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2fdd28: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x2fdd28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x2fdd2c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2fdd2cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x2fdd30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2fdd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2fdd34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2fdd34u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x2fdd38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2fdd3c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2fdd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2fdd40: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2fdd40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2fdd44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDD44u;
    {
        const bool branch_taken_0x2fdd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD44u;
        // 0x2fdd48: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdd44) {
            ctx->pc = 0x2FDD58u;
            goto label_2fdd58;
        }
    }
    ctx->pc = 0x2FDD4Cu;
    // 0x2fdd4c: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x2FDD4Cu;
    SET_GPR_U32(ctx, 31, 0x2FDD54u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x2FDD4Cu, 0x2FDD54u)) {
        return;
    }
    ctx->pc = 0x2FDD54u;
label_2fdd54:
    // 0x2fdd54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2fdd58:
    // 0x2fdd58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fdd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fdd5c: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x2fdd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x2fdd60: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2fdd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdd64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2fdd64u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x2fdd68: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD68u;
        // 0x2fdd6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD70u;
}
