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

// Function: sub_001D1110
// Address: 0x1d1110 - 0x1d11c8
void sub_001D1110_0x1d1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1110_0x1d1110");
#endif

    switch (ctx->pc) {
        case 0x1d1138u: goto label_1d1138;
        case 0x1d1194u: goto label_1d1194;
        default: break;
    }

    ctx->pc = 0x1d1110u;

    // 0x1d1110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d1114: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d1114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d1118: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d1118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d111c: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1d111cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x1d1120: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d1124: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d112c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1d112cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1134: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1d1134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d1138:
    // 0x1d1138: 0x8e239b18  lw          $v1, -0x64E8($s1)
    ctx->pc = 0x1d1138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941464)));
    // 0x1d113c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1d113cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d1140: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d1140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d1144: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x1d1144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
    // 0x1d1148: 0x8e229b18  lw          $v0, -0x64E8($s1)
    ctx->pc = 0x1d1148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941464)));
    // 0x1d114c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d1150: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1d1150u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1154: 0x8e239b18  lw          $v1, -0x64E8($s1)
    ctx->pc = 0x1d1154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941464)));
    // 0x1d1158: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d1158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d115c: 0xa4600064  sh          $zero, 0x64($v1)
    ctx->pc = 0x1d115cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1160: 0x8e229b18  lw          $v0, -0x64E8($s1)
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941464)));
    // 0x1d1164: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d1164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d1168: 0xa44000a4  sh          $zero, 0xA4($v0)
    ctx->pc = 0x1d1168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d116c: 0x8e239b18  lw          $v1, -0x64E8($s1)
    ctx->pc = 0x1d116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941464)));
    // 0x1d1170: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d1170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d1174: 0xa46000e4  sh          $zero, 0xE4($v1)
    ctx->pc = 0x1d1174u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 228), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1178: 0x8e229b18  lw          $v0, -0x64E8($s1)
    ctx->pc = 0x1d1178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294941464)));
    // 0x1d117c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d1180: 0x8c430128  lw          $v1, 0x128($v0)
    ctx->pc = 0x1d1180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
    // 0x1d1184: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1184u;
    {
        const bool branch_taken_0x1d1184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1184u;
        // 0x1d1188: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1184) {
            ctx->pc = 0x1D1194u;
            goto label_1d1194;
        }
    }
    ctx->pc = 0x1D118Cu;
    // 0x1d118c: 0xc08a0e2  jal         func_228388
    ctx->pc = 0x1D118Cu;
    SET_GPR_U32(ctx, 31, 0x1D1194u);
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x1D118Cu, 0x1D1194u)) {
        return;
    }
    ctx->pc = 0x1D1194u;
label_1d1194:
    // 0x1d1194: 0x8e629b18  lw          $v0, -0x64E8($s3)
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941464)));
    // 0x1d1198: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d119c: 0x2610012c  addiu       $s0, $s0, 0x12C
    ctx->pc = 0x1d119cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x1d11a0: 0x641ffe5  bgez        $s2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D11A0u;
    {
        const bool branch_taken_0x1d11a0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1D11A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11A0u;
        // 0x1d11a4: 0xac400128  sw          $zero, 0x128($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d11a0) {
            ctx->pc = 0x1D1138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1138;
        }
    }
    ctx->pc = 0x1D11A8u;
    // 0x1d11a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d11a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d11ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d11acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d11b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d11b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d11b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d11b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d11b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d11b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d11bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D11BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11BCu;
        // 0x1d11c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D11BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D11C4u;
    // 0x1d11c4: 0x0  nop
    ctx->pc = 0x1d11c4u;
    // NOP
    ctx->pc = 0x1d11c8u;
}
