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

// Function: sub_0010EF78
// Address: 0x10ef78 - 0x10f030
void sub_0010EF78_0x10ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF78_0x10ef78");
#endif

    switch (ctx->pc) {
        case 0x10ef98u: goto label_10ef98;
        case 0x10efa4u: goto label_10efa4;
        case 0x10efe0u: goto label_10efe0;
        case 0x10eff8u: goto label_10eff8;
        case 0x10f008u: goto label_10f008;
        case 0x10f014u: goto label_10f014;
        default: break;
    }

    ctx->pc = 0x10ef78u;

    // 0x10ef78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ef7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10ef80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10ef80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10ef88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10ef8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ef90: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x10EF90u;
    SET_GPR_U32(ctx, 31, 0x10EF98u);
    ctx->pc = 0x10EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF90u;
    // 0x10ef94: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x10EF90u, 0x10EF98u)) {
        return;
    }
    ctx->pc = 0x10EF98u;
label_10ef98:
    // 0x10ef98: 0x26110044  addiu       $s1, $s0, 0x44
    ctx->pc = 0x10ef98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x10ef9c: 0xc043c50  jal         func_10F140
    ctx->pc = 0x10EF9Cu;
    SET_GPR_U32(ctx, 31, 0x10EFA4u);
    ctx->pc = 0x10EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF9Cu;
    // 0x10efa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F140u, 0x10EF9Cu, 0x10EFA4u)) {
        return;
    }
    ctx->pc = 0x10EFA4u;
label_10efa4:
    // 0x10efa4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x10efa8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10efa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10efac: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10efacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10efb0: 0x2463a240  addiu       $v1, $v1, -0x5DC0
    ctx->pc = 0x10efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943296));
    // 0x10efb4: 0x24a5a260  addiu       $a1, $a1, -0x5DA0
    ctx->pc = 0x10efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943328));
    // 0x10efb8: 0x2442a228  addiu       $v0, $v0, -0x5DD8
    ctx->pc = 0x10efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943272));
    // 0x10efbc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x10efbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x10efc0: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x10efc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x10efc4: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x10efc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
    // 0x10efc8: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x10efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x10efcc: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x10efccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x10efd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10efd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efd4: 0xacd08300  sw          $s0, -0x7D00($a2)
    ctx->pc = 0x10efd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x338300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338300u, _value); } while (0);
    // 0x10efd8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x10EFD8u;
    SET_GPR_U32(ctx, 31, 0x10EFE0u);
    ctx->pc = 0x10EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFD8u;
    // 0x10efdc: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x10EFD8u, 0x10EFE0u)) {
        return;
    }
    ctx->pc = 0x10EFE0u;
label_10efe0:
    // 0x10efe0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10efe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10efe4: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x10efe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10efe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10efe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10efec: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x10efecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x10eff0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x10EFF0u;
    SET_GPR_U32(ctx, 31, 0x10EFF8u);
    ctx->pc = 0x10EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EFF0u;
    // 0x10eff4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x10EFF0u, 0x10EFF8u)) {
        return;
    }
    ctx->pc = 0x10EFF8u;
label_10eff8:
    // 0x10eff8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x10eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x10effc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f000: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x10F000u;
    SET_GPR_U32(ctx, 31, 0x10F008u);
    ctx->pc = 0x10F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F000u;
    // 0x10f004: 0x24a5a1d0  addiu       $a1, $a1, -0x5E30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x10F000u, 0x10F008u)) {
        return;
    }
    ctx->pc = 0x10F008u;
label_10f008:
    // 0x10f008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f00c: 0xc043c72  jal         func_10F1C8
    ctx->pc = 0x10F00Cu;
    SET_GPR_U32(ctx, 31, 0x10F014u);
    ctx->pc = 0x10F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F00Cu;
    // 0x10f010: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1C8u, 0x10F00Cu, 0x10F014u)) {
        return;
    }
    ctx->pc = 0x10F014u;
label_10f014:
    // 0x10f014: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10f014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f018: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10f018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f01c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10f01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f020: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10f020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10f024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f028: 0x3e00008  jr          $ra
    ctx->pc = 0x10F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F028u;
        // 0x10f02c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F030u;
}
