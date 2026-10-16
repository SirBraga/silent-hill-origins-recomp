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

// Function: sub_00199F68
// Address: 0x199f68 - 0x19a090
void sub_00199F68_0x199f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199F68_0x199f68");
#endif

    switch (ctx->pc) {
        case 0x199ff8u: goto label_199ff8;
        case 0x19a000u: goto label_19a000;
        case 0x19a008u: goto label_19a008;
        case 0x19a010u: goto label_19a010;
        case 0x19a030u: goto label_19a030;
        case 0x19a048u: goto label_19a048;
        case 0x19a060u: goto label_19a060;
        case 0x19a078u: goto label_19a078;
        default: break;
    }

    ctx->pc = 0x199f68u;

    // 0x199f68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199f6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x199f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x199f70: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x199f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x199f74: 0x244232d0  addiu       $v0, $v0, 0x32D0
    ctx->pc = 0x199f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13008));
    // 0x199f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199f84: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x199f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x199f88: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x199f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x199f8c: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x199f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x199f90: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x199f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x199f94: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x199f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x199f98: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x199f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x199f9c: 0x2484f7a8  addiu       $a0, $a0, -0x858
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965160));
    // 0x199fa0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x199fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x199fa4: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x199fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x199fa8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x199fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x199fac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x199facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x199fb0: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x199fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x199fb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x199fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x199fb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x199fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x199fbc: 0x24639f10  addiu       $v1, $v1, -0x60F0
    ctx->pc = 0x199fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942480));
    // 0x199fc0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x199fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x199fc4: 0x24a59ef0  addiu       $a1, $a1, -0x6110
    ctx->pc = 0x199fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942448));
    // 0x199fc8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x199fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x199fcc: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x199fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x199fd0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x199fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x199fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199fd8: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x199fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x199fdc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x199fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x199fe0: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x199fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x199fe4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x199fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x199fe8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x199fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x199fec: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x199fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x199ff0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x199FF0u;
    SET_GPR_U32(ctx, 31, 0x199FF8u);
    ctx->pc = 0x199FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FF0u;
    // 0x199ff4: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x199FF0u, 0x199FF8u)) {
        return;
    }
    ctx->pc = 0x199FF8u;
label_199ff8:
    // 0x199ff8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x199FF8u;
    SET_GPR_U32(ctx, 31, 0x19A000u);
    ctx->pc = 0x199FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199FF8u;
    // 0x199ffc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x199FF8u, 0x19A000u)) {
        return;
    }
    ctx->pc = 0x19A000u;
label_19a000:
    // 0x19a000: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A000u;
    SET_GPR_U32(ctx, 31, 0x19A008u);
    ctx->pc = 0x19A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A000u;
    // 0x19a004: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A000u, 0x19A008u)) {
        return;
    }
    ctx->pc = 0x19A008u;
label_19a008:
    // 0x19a008: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x19A008u;
    SET_GPR_U32(ctx, 31, 0x19A010u);
    ctx->pc = 0x19A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A008u;
    // 0x19a00c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x19A008u, 0x19A010u)) {
        return;
    }
    ctx->pc = 0x19A010u;
label_19a010:
    // 0x19a010: 0x3c11006a  lui         $s1, 0x6A
    ctx->pc = 0x19a010u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)106 << 16));
    // 0x19a014: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a018: 0x26319e70  addiu       $s1, $s1, -0x6190
    ctx->pc = 0x19a018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942320));
    // 0x19a01c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19a020: 0x24848110  addiu       $a0, $a0, -0x7EF0
    ctx->pc = 0x19a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    // 0x19a024: 0x24a59e50  addiu       $a1, $a1, -0x61B0
    ctx->pc = 0x19a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942288));
    // 0x19a028: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19A028u;
    SET_GPR_U32(ctx, 31, 0x19A030u);
    ctx->pc = 0x19A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A028u;
    // 0x19a02c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19A028u, 0x19A030u)) {
        return;
    }
    ctx->pc = 0x19A030u;
label_19a030:
    // 0x19a030: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a034: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19a034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19a038: 0x24848118  addiu       $a0, $a0, -0x7EE8
    ctx->pc = 0x19a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934808));
    // 0x19a03c: 0x24a59e80  addiu       $a1, $a1, -0x6180
    ctx->pc = 0x19a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942336));
    // 0x19a040: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19A040u;
    SET_GPR_U32(ctx, 31, 0x19A048u);
    ctx->pc = 0x19A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A040u;
    // 0x19a044: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19A040u, 0x19A048u)) {
        return;
    }
    ctx->pc = 0x19A048u;
label_19a048:
    // 0x19a048: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a04c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19a050: 0x24848128  addiu       $a0, $a0, -0x7ED8
    ctx->pc = 0x19a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934824));
    // 0x19a054: 0x24a59ea0  addiu       $a1, $a1, -0x6160
    ctx->pc = 0x19a054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942368));
    // 0x19a058: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19A058u;
    SET_GPR_U32(ctx, 31, 0x19A060u);
    ctx->pc = 0x19A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A058u;
    // 0x19a05c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19A058u, 0x19A060u)) {
        return;
    }
    ctx->pc = 0x19A060u;
label_19a060:
    // 0x19a060: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a064: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x19a064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19a068: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19a068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a06c: 0x24848120  addiu       $a0, $a0, -0x7EE0
    ctx->pc = 0x19a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x19a070: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x19A070u;
    SET_GPR_U32(ctx, 31, 0x19A078u);
    ctx->pc = 0x19A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A070u;
    // 0x19a074: 0x24a59ec0  addiu       $a1, $a1, -0x6140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x19A070u, 0x19A078u)) {
        return;
    }
    ctx->pc = 0x19A078u;
label_19a078:
    // 0x19a078: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19a078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a07c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a080: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19a080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a088: 0x3e00008  jr          $ra
    ctx->pc = 0x19A088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A088u;
        // 0x19a08c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A090u;
}
