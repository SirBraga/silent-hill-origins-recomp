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

// Function: sub_0017D5A8
// Address: 0x17d5a8 - 0x17d648
void sub_0017D5A8_0x17d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D5A8_0x17d5a8");
#endif

    switch (ctx->pc) {
        case 0x17d5e8u: goto label_17d5e8;
        case 0x17d5f4u: goto label_17d5f4;
        case 0x17d5fcu: goto label_17d5fc;
        case 0x17d608u: goto label_17d608;
        case 0x17d614u: goto label_17d614;
        case 0x17d620u: goto label_17d620;
        case 0x17d62cu: goto label_17d62c;
        default: break;
    }

    ctx->pc = 0x17d5a8u;

    // 0x17d5a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17d5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17d5ac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17d5b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17d5b4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17d5b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17d5bc: 0x24427468  addiu       $v0, $v0, 0x7468
    ctx->pc = 0x17d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29800));
    // 0x17d5c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17d5c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17d5c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d5cc: 0x24637488  addiu       $v1, $v1, 0x7488
    ctx->pc = 0x17d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29832));
    // 0x17d5d0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x17d5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x17d5d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17d5d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5d8: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x17d5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x17d5dc: 0x26300048  addiu       $s0, $s1, 0x48
    ctx->pc = 0x17d5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x17d5e0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17D5E0u;
    SET_GPR_U32(ctx, 31, 0x17D5E8u);
    ctx->pc = 0x17D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5E0u;
    // 0x17d5e4: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17D5E0u, 0x17D5E8u)) {
        return;
    }
    ctx->pc = 0x17D5E8u;
label_17d5e8:
    // 0x17d5e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17d5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d5ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17D5ECu;
    SET_GPR_U32(ctx, 31, 0x17D5F4u);
    ctx->pc = 0x17D5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5ECu;
    // 0x17d5f0: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17D5ECu, 0x17D5F4u)) {
        return;
    }
    ctx->pc = 0x17D5F4u;
label_17d5f4:
    // 0x17d5f4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17D5F4u;
    SET_GPR_U32(ctx, 31, 0x17D5FCu);
    ctx->pc = 0x17D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D5F4u;
    // 0x17d5f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17D5F4u, 0x17D5FCu)) {
        return;
    }
    ctx->pc = 0x17D5FCu;
label_17d5fc:
    // 0x17d5fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d600: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17D600u;
    SET_GPR_U32(ctx, 31, 0x17D608u);
    ctx->pc = 0x17D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D600u;
    // 0x17d604: 0x2484f948  addiu       $a0, $a0, -0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17D600u, 0x17D608u)) {
        return;
    }
    ctx->pc = 0x17D608u;
label_17d608:
    // 0x17d608: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17d608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17d60c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17D60Cu;
    SET_GPR_U32(ctx, 31, 0x17D614u);
    ctx->pc = 0x17D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D60Cu;
    // 0x17d610: 0x2484f950  addiu       $a0, $a0, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17D60Cu, 0x17D614u)) {
        return;
    }
    ctx->pc = 0x17D614u;
label_17d614:
    // 0x17d614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d618: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17D618u;
    SET_GPR_U32(ctx, 31, 0x17D620u);
    ctx->pc = 0x17D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D618u;
    // 0x17d61c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17D618u, 0x17D620u)) {
        return;
    }
    ctx->pc = 0x17D620u;
label_17d620:
    // 0x17d620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17d620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d624: 0xc04f084  jal         func_13C210
    ctx->pc = 0x17D624u;
    SET_GPR_U32(ctx, 31, 0x17D62Cu);
    ctx->pc = 0x17D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D624u;
    // 0x17d628: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x17D624u, 0x17D62Cu)) {
        return;
    }
    ctx->pc = 0x17D62Cu;
label_17d62c:
    // 0x17d62c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17d62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17d630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17d630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d634: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17d634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d63c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D63Cu;
        // 0x17d640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D644u;
    // 0x17d644: 0x0  nop
    ctx->pc = 0x17d644u;
    // NOP
    ctx->pc = 0x17d648u;
}
