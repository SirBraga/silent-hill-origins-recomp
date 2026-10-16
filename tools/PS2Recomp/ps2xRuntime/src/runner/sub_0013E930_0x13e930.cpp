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

// Function: sub_0013E930
// Address: 0x13e930 - 0x13ea08
void sub_0013E930_0x13e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E930_0x13e930");
#endif

    switch (ctx->pc) {
        case 0x13e990u: goto label_13e990;
        case 0x13e9a4u: goto label_13e9a4;
        case 0x13e9b8u: goto label_13e9b8;
        case 0x13e9ccu: goto label_13e9cc;
        case 0x13e9d4u: goto label_13e9d4;
        case 0x13e9e0u: goto label_13e9e0;
        case 0x13e9ecu: goto label_13e9ec;
        default: break;
    }

    ctx->pc = 0x13e930u;

    // 0x13e930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13e934: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13e934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13e938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13e93c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13e940: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13e940u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13e944: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x13e944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x13e948: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13e948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e94c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13e950: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13e950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13e954: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x13e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x13e958: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13e95c: 0x2463fee0  addiu       $v1, $v1, -0x120
    ctx->pc = 0x13e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967008));
    // 0x13e960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e964: 0x24c6fea0  addiu       $a2, $a2, -0x160
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966944));
    // 0x13e968: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x13e96c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x13e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x13e970: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x13e970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
    // 0x13e974: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13e974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13e978: 0xae460084  sw          $a2, 0x84($s2)
    ctx->pc = 0x13e978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 6));
    // 0x13e97c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13e97cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e980: 0xae470034  sw          $a3, 0x34($s2)
    ctx->pc = 0x13e980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 7));
    // 0x13e984: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x13e984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x13e988: 0xc0544fe  jal         func_1513F8
    ctx->pc = 0x13E988u;
    SET_GPR_U32(ctx, 31, 0x13E990u);
    ctx->pc = 0x13E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E988u;
    // 0x13e98c: 0x8c4484fc  lw          $a0, -0x7B04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1513F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1513F8u, 0x13E988u, 0x13E990u)) {
        return;
    }
    ctx->pc = 0x13E990u;
label_13e990:
    // 0x13e990: 0x8e4201c4  lw          $v0, 0x1C4($s2)
    ctx->pc = 0x13e990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x13e994: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E994u;
    {
        const bool branch_taken_0x13e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E994u;
        // 0x13e998: 0x26500038  addiu       $s0, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e994) {
            ctx->pc = 0x13E9A8u;
            goto label_13e9a8;
        }
    }
    ctx->pc = 0x13E99Cu;
    // 0x13e99c: 0xc04faf8  jal         func_13EBE0
    ctx->pc = 0x13E99Cu;
    SET_GPR_U32(ctx, 31, 0x13E9A4u);
    ctx->pc = 0x13E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E99Cu;
    // 0x13e9a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EBE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13EBE0u, 0x13E99Cu, 0x13E9A4u)) {
        return;
    }
    ctx->pc = 0x13E9A4u;
label_13e9a4:
    // 0x13e9a4: 0x26500038  addiu       $s0, $s2, 0x38
    ctx->pc = 0x13e9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_13e9a8:
    // 0x13e9a8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13e9ac: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x13e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x13e9b0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13E9B0u;
    SET_GPR_U32(ctx, 31, 0x13E9B8u);
    ctx->pc = 0x13E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9B0u;
    // 0x13e9b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13E9B0u, 0x13E9B8u)) {
        return;
    }
    ctx->pc = 0x13E9B8u;
label_13e9b8:
    // 0x13e9b8: 0x265101cc  addiu       $s1, $s2, 0x1CC
    ctx->pc = 0x13e9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 460));
    // 0x13e9bc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13e9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9c4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13E9C4u;
    SET_GPR_U32(ctx, 31, 0x13E9CCu);
    ctx->pc = 0x13E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9C4u;
    // 0x13e9c8: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13E9C4u, 0x13E9CCu)) {
        return;
    }
    ctx->pc = 0x13E9CCu;
label_13e9cc:
    // 0x13e9cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13E9CCu;
    SET_GPR_U32(ctx, 31, 0x13E9D4u);
    ctx->pc = 0x13E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9CCu;
    // 0x13e9d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13E9CCu, 0x13E9D4u)) {
        return;
    }
    ctx->pc = 0x13E9D4u;
label_13e9d4:
    // 0x13e9d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13e9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9d8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13E9D8u;
    SET_GPR_U32(ctx, 31, 0x13E9E0u);
    ctx->pc = 0x13E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9D8u;
    // 0x13e9dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13E9D8u, 0x13E9E0u)) {
        return;
    }
    ctx->pc = 0x13E9E0u;
label_13e9e0:
    // 0x13e9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e9e4: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x13E9E4u;
    SET_GPR_U32(ctx, 31, 0x13E9ECu);
    ctx->pc = 0x13E9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E9E4u;
    // 0x13e9e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x13E9E4u, 0x13E9ECu)) {
        return;
    }
    ctx->pc = 0x13E9ECu;
label_13e9ec:
    // 0x13e9ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13e9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e9f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13e9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e9f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e9f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13e9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x13EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EA00u;
        // 0x13ea04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EA08u;
}
