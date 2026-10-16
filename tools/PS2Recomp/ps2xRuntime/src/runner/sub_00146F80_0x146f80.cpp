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

// Function: sub_00146F80
// Address: 0x146f80 - 0x147078
void sub_00146F80_0x146f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146F80_0x146f80");
#endif

    switch (ctx->pc) {
        case 0x14703cu: goto label_14703c;
        case 0x14705cu: goto label_14705c;
        default: break;
    }

    ctx->pc = 0x146f80u;

    // 0x146f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x146f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x146f84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x146f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x146f88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x146f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x146f8c: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x146f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x146f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146f9c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x146f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x146fa0: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x146fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x146fa4: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x146fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x146fa8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x146fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x146fac: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x146facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x146fb0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x146fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x146fb4: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x146fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x146fb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x146fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x146fbc: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x146fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x146fc0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x146fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x146fc4: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x146fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x146fc8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x146fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x146fcc: 0x250835d0  addiu       $t0, $t0, 0x35D0
    ctx->pc = 0x146fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13776));
    // 0x146fd0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x146fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x146fd4: 0x26110038  addiu       $s1, $s0, 0x38
    ctx->pc = 0x146fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x146fd8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x146fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x146fdc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x146fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x146fe0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x146fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x146fe4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x146fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x146fe8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x146fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x146fec: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x146fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
    // 0x146ff0: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x146ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x146ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146ff8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x146ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x146ffc: 0x24c61000  addiu       $a2, $a2, 0x1000
    ctx->pc = 0x146ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4096));
    // 0x147000: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x147000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x147004: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x147004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147008: 0xae280004  sw          $t0, 0x4($s1)
    ctx->pc = 0x147008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 8));
    // 0x14700c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x147010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147014: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x147014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x147018: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x147018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x14701c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x14701cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x147020: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x147020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x147024: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x147024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x147028: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x147028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
    // 0x14702c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x14702cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x147030: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x147030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x147034: 0xc0803ee  jal         func_200FB8
    ctx->pc = 0x147034u;
    SET_GPR_U32(ctx, 31, 0x14703Cu);
    ctx->pc = 0x147038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147034u;
    // 0x147038: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200FB8u, 0x147034u, 0x14703Cu)) {
        return;
    }
    ctx->pc = 0x14703Cu;
label_14703c:
    // 0x14703c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x14703cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x147040: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x147040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x147044: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x147044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x147048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x147048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14704c: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x14704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x147050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x147050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147054: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x147054u;
    SET_GPR_U32(ctx, 31, 0x14705Cu);
    ctx->pc = 0x147058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147054u;
    // 0x147058: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x147054u, 0x14705Cu)) {
        return;
    }
    ctx->pc = 0x14705Cu;
label_14705c:
    // 0x14705c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14705cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147064: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x147064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14706c: 0x3e00008  jr          $ra
    ctx->pc = 0x14706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14706Cu;
        // 0x147070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14706Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147074u;
    // 0x147074: 0x0  nop
    ctx->pc = 0x147074u;
    // NOP
    ctx->pc = 0x147078u;
}
