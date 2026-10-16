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

// Function: sub_00196780
// Address: 0x196780 - 0x196838
void sub_00196780_0x196780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196780_0x196780");
#endif

    switch (ctx->pc) {
        case 0x1967dcu: goto label_1967dc;
        case 0x1967f8u: goto label_1967f8;
        case 0x196818u: goto label_196818;
        default: break;
    }

    ctx->pc = 0x196780u;

    // 0x196780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196784: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x196784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x196788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x196788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19678c: 0x3c033149  lui         $v1, 0x3149
    ctx->pc = 0x19678cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12617 << 16));
    // 0x196790: 0x8c44bf80  lw          $a0, -0x4080($v0)
    ctx->pc = 0x196790u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CBF80u));
    // 0x196794: 0x2451bf80  addiu       $s1, $v0, -0x4080
    ctx->pc = 0x196794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950784));
    // 0x196798: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x196798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19679c: 0x34634d43  ori         $v1, $v1, 0x4D43
    ctx->pc = 0x19679cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19779);
    // 0x1967a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1967a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1967a4: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1967A4u;
    {
        const bool branch_taken_0x1967a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1967A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967A4u;
        // 0x1967a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967a4) {
            ctx->pc = 0x196820u;
            goto label_196820;
        }
    }
    ctx->pc = 0x1967ACu;
    // 0x1967ac: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x1967acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x1967b0: 0x8e428b98  lw          $v0, -0x7468($s2)
    ctx->pc = 0x1967b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338B98u));
    // 0x1967b4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1967B4u;
    {
        const bool branch_taken_0x1967b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1967B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1967B4u;
        // 0x1967b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1967b4) {
            ctx->pc = 0x196824u;
            goto label_196824;
        }
    }
    ctx->pc = 0x1967BCu;
    // 0x1967bc: 0x3c10006e  lui         $s0, 0x6E
    ctx->pc = 0x1967bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)110 << 16));
    // 0x1967c0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1967c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1967c4: 0x26108060  addiu       $s0, $s0, -0x7FA0
    ctx->pc = 0x1967c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934624));
    // 0x1967c8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1967c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1967cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1967ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1967d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1967d4: 0xc06591c  jal         func_196470
    ctx->pc = 0x1967D4u;
    SET_GPR_U32(ctx, 31, 0x1967DCu);
    ctx->pc = 0x1967D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967D4u;
    // 0x1967d8: 0x26280020  addiu       $t0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196470u, 0x1967D4u, 0x1967DCu)) {
        return;
    }
    ctx->pc = 0x1967DCu;
label_1967dc:
    // 0x1967dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1967dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1967e0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1967e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1967e4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1967e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1967e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1967e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1967ec: 0x26280060  addiu       $t0, $s1, 0x60
    ctx->pc = 0x1967ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1967f0: 0xc06591c  jal         func_196470
    ctx->pc = 0x1967F0u;
    SET_GPR_U32(ctx, 31, 0x1967F8u);
    ctx->pc = 0x1967F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1967F0u;
    // 0x1967f4: 0xae428b98  sw          $v0, -0x7468($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294937496), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196470u, 0x1967F0u, 0x1967F8u)) {
        return;
    }
    ctx->pc = 0x1967F8u;
label_1967f8:
    // 0x1967f8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1967f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1967fc: 0x262800a0  addiu       $t0, $s1, 0xA0
    ctx->pc = 0x1967fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x196800: 0xac628b9c  sw          $v0, -0x7464($v1)
    ctx->pc = 0x196800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338B9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338B9Cu, _value); } while (0);
    // 0x196804: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x196804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x196808: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x196808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x19680c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19680cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x196810: 0xc06591c  jal         func_196470
    ctx->pc = 0x196810u;
    SET_GPR_U32(ctx, 31, 0x196818u);
    ctx->pc = 0x196814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196810u;
    // 0x196814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x196470u, 0x196810u, 0x196818u)) {
        return;
    }
    ctx->pc = 0x196818u;
label_196818:
    // 0x196818: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x196818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x19681c: 0xac628ba0  sw          $v0, -0x7460($v1)
    ctx->pc = 0x19681cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338BA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338BA0u, _value); } while (0);
label_196820:
    // 0x196820: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x196820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196824:
    // 0x196824: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196828: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x196828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19682c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19682cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196830: 0x3e00008  jr          $ra
    ctx->pc = 0x196830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196830u;
        // 0x196834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196838u;
}
