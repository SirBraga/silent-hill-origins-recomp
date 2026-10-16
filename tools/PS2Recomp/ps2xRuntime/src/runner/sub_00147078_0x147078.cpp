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

// Function: sub_00147078
// Address: 0x147078 - 0x147128
void sub_00147078_0x147078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147078_0x147078");
#endif

    switch (ctx->pc) {
        case 0x1470c4u: goto label_1470c4;
        case 0x1470ccu: goto label_1470cc;
        case 0x1470e0u: goto label_1470e0;
        case 0x1470ecu: goto label_1470ec;
        case 0x1470f8u: goto label_1470f8;
        case 0x14710cu: goto label_14710c;
        default: break;
    }

    ctx->pc = 0x147078u;

    // 0x147078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14707c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x147080: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x147080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x147084: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x147088: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x147088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14708c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14708cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147090: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x147090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x147094: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x147094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x147098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14709c: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x14709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
    // 0x1470a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1470a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470a4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1470a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1470a8: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x1470a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1470ac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1470ACu;
    {
        const bool branch_taken_0x1470ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1470B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470ACu;
        // 0x1470b0: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470ac) {
            ctx->pc = 0x1470CCu;
            goto label_1470cc;
        }
    }
    ctx->pc = 0x1470B4u;
    // 0x1470b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1470b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1470b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1470b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470bc: 0xc06659a  jal         func_199668
    ctx->pc = 0x1470BCu;
    SET_GPR_U32(ctx, 31, 0x1470C4u);
    ctx->pc = 0x1470C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470BCu;
    // 0x1470c0: 0x8c448bc4  lw          $a0, -0x743C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199668u, 0x1470BCu, 0x1470C4u)) {
        return;
    }
    ctx->pc = 0x1470C4u;
label_1470c4:
    // 0x1470c4: 0xc0b5b86  jal         func_2D6E18
    ctx->pc = 0x1470C4u;
    SET_GPR_U32(ctx, 31, 0x1470CCu);
    ctx->pc = 0x1470C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470C4u;
    // 0x1470c8: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6E18u, 0x1470C4u, 0x1470CCu)) {
        return;
    }
    ctx->pc = 0x1470CCu;
label_1470cc:
    // 0x1470cc: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x1470ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x1470d0: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1470d4: 0x24a58888  addiu       $a1, $a1, -0x7778
    ctx->pc = 0x1470d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    // 0x1470d8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1470D8u;
    SET_GPR_U32(ctx, 31, 0x1470E0u);
    ctx->pc = 0x1470DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470D8u;
    // 0x1470dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1470D8u, 0x1470E0u)) {
        return;
    }
    ctx->pc = 0x1470E0u;
label_1470e0:
    // 0x1470e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1470e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470e4: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x1470E4u;
    SET_GPR_U32(ctx, 31, 0x1470ECu);
    ctx->pc = 0x1470E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470E4u;
    // 0x1470e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x1470E4u, 0x1470ECu)) {
        return;
    }
    ctx->pc = 0x1470ECu;
label_1470ec:
    // 0x1470ec: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1470ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1470f0: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1470F0u;
    SET_GPR_U32(ctx, 31, 0x1470F8u);
    ctx->pc = 0x1470F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1470F0u;
    // 0x1470f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x1470F0u, 0x1470F8u)) {
        return;
    }
    ctx->pc = 0x1470F8u;
label_1470f8:
    // 0x1470f8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x1470f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x1470fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1470FCu;
    {
        const bool branch_taken_0x1470fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1470FCu;
        // 0x147100: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1470fc) {
            ctx->pc = 0x147110u;
            goto label_147110;
        }
    }
    ctx->pc = 0x147104u;
    // 0x147104: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x147104u;
    SET_GPR_U32(ctx, 31, 0x14710Cu);
    ctx->pc = 0x147108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147104u;
    // 0x147108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x147104u, 0x14710Cu)) {
        return;
    }
    ctx->pc = 0x14710Cu;
label_14710c:
    // 0x14710c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14710cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_147110:
    // 0x147110: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x147110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147114: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x147114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14711c: 0x3e00008  jr          $ra
    ctx->pc = 0x14711Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14711Cu;
        // 0x147120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14711Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147124u;
    // 0x147124: 0x0  nop
    ctx->pc = 0x147124u;
    // NOP
    ctx->pc = 0x147128u;
}
