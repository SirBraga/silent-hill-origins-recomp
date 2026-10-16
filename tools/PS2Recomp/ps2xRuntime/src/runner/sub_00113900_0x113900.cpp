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

// Function: sub_00113900
// Address: 0x113900 - 0x113a78
void sub_00113900_0x113900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113900_0x113900");
#endif

    switch (ctx->pc) {
        case 0x113924u: goto label_113924;
        case 0x113938u: goto label_113938;
        case 0x113944u: goto label_113944;
        case 0x113950u: goto label_113950;
        case 0x11395cu: goto label_11395c;
        case 0x113968u: goto label_113968;
        case 0x113974u: goto label_113974;
        case 0x113980u: goto label_113980;
        case 0x11398cu: goto label_11398c;
        case 0x113998u: goto label_113998;
        case 0x1139a4u: goto label_1139a4;
        case 0x1139b8u: goto label_1139b8;
        case 0x1139c8u: goto label_1139c8;
        case 0x1139d8u: goto label_1139d8;
        case 0x1139e8u: goto label_1139e8;
        case 0x1139f8u: goto label_1139f8;
        case 0x113a08u: goto label_113a08;
        case 0x113a18u: goto label_113a18;
        case 0x113a28u: goto label_113a28;
        case 0x113a38u: goto label_113a38;
        case 0x113a48u: goto label_113a48;
        default: break;
    }

    ctx->pc = 0x113900u;

    // 0x113900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113904: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x113904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x113908: 0x14a2004f  bne         $a1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x113908u;
    {
        const bool branch_taken_0x113908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113908u;
        // 0x11390c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113908) {
            ctx->pc = 0x113A48u;
            goto label_113a48;
        }
    }
    ctx->pc = 0x113910u;
    // 0x113910: 0x50800026  beql        $a0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x113910u;
    {
        const bool branch_taken_0x113910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113910) {
            ctx->pc = 0x113914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113910u;
            // 0x113914: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1139ACu;
            goto label_1139ac;
        }
    }
    ctx->pc = 0x113918u;
    // 0x113918: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x113918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11391c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x11391Cu;
    SET_GPR_U32(ctx, 31, 0x113924u);
    ctx->pc = 0x113920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11391Cu;
    // 0x113920: 0x2484ab40  addiu       $a0, $a0, -0x54C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x11391Cu, 0x113924u)) {
        return;
    }
    ctx->pc = 0x113924u;
label_113924:
    // 0x113924: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x113924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x113928: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11392c: 0xac6244c4  sw          $v0, 0x44C4($v1)
    ctx->pc = 0x11392cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B44C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B44C4u, _value); } while (0);
    // 0x113930: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113930u;
    SET_GPR_U32(ctx, 31, 0x113938u);
    ctx->pc = 0x113934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113930u;
    // 0x113934: 0x248444c8  addiu       $a0, $a0, 0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113930u, 0x113938u)) {
        return;
    }
    ctx->pc = 0x113938u;
label_113938:
    // 0x113938: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11393c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11393Cu;
    SET_GPR_U32(ctx, 31, 0x113944u);
    ctx->pc = 0x113940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11393Cu;
    // 0x113940: 0x248444d0  addiu       $a0, $a0, 0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11393Cu, 0x113944u)) {
        return;
    }
    ctx->pc = 0x113944u;
label_113944:
    // 0x113944: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113948: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113948u;
    SET_GPR_U32(ctx, 31, 0x113950u);
    ctx->pc = 0x11394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113948u;
    // 0x11394c: 0x248444d8  addiu       $a0, $a0, 0x44D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113948u, 0x113950u)) {
        return;
    }
    ctx->pc = 0x113950u;
label_113950:
    // 0x113950: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113954: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113954u;
    SET_GPR_U32(ctx, 31, 0x11395Cu);
    ctx->pc = 0x113958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113954u;
    // 0x113958: 0x248444e0  addiu       $a0, $a0, 0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113954u, 0x11395Cu)) {
        return;
    }
    ctx->pc = 0x11395Cu;
label_11395c:
    // 0x11395c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113960: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113960u;
    SET_GPR_U32(ctx, 31, 0x113968u);
    ctx->pc = 0x113964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113960u;
    // 0x113964: 0x248444e8  addiu       $a0, $a0, 0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113960u, 0x113968u)) {
        return;
    }
    ctx->pc = 0x113968u;
label_113968:
    // 0x113968: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11396c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11396Cu;
    SET_GPR_U32(ctx, 31, 0x113974u);
    ctx->pc = 0x113970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11396Cu;
    // 0x113970: 0x248444f0  addiu       $a0, $a0, 0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11396Cu, 0x113974u)) {
        return;
    }
    ctx->pc = 0x113974u;
label_113974:
    // 0x113974: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113978: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113978u;
    SET_GPR_U32(ctx, 31, 0x113980u);
    ctx->pc = 0x11397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113978u;
    // 0x11397c: 0x248444f8  addiu       $a0, $a0, 0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113978u, 0x113980u)) {
        return;
    }
    ctx->pc = 0x113980u;
label_113980:
    // 0x113980: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113984: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113984u;
    SET_GPR_U32(ctx, 31, 0x11398Cu);
    ctx->pc = 0x113988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113984u;
    // 0x113988: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113984u, 0x11398Cu)) {
        return;
    }
    ctx->pc = 0x11398Cu;
label_11398c:
    // 0x11398c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11398cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113990: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x113990u;
    SET_GPR_U32(ctx, 31, 0x113998u);
    ctx->pc = 0x113994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113990u;
    // 0x113994: 0x24844508  addiu       $a0, $a0, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x113990u, 0x113998u)) {
        return;
    }
    ctx->pc = 0x113998u;
label_113998:
    // 0x113998: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11399c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x11399Cu;
    SET_GPR_U32(ctx, 31, 0x1139A4u);
    ctx->pc = 0x1139A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11399Cu;
    // 0x1139a0: 0x24844510  addiu       $a0, $a0, 0x4510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x11399Cu, 0x1139A4u)) {
        return;
    }
    ctx->pc = 0x1139A4u;
label_1139a4:
    // 0x1139a4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1139A4u;
    {
        const bool branch_taken_0x1139a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139A4u;
        // 0x1139a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139a4) {
            ctx->pc = 0x113A4Cu;
            goto label_113a4c;
        }
    }
    ctx->pc = 0x1139ACu;
label_1139ac:
    // 0x1139ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1139acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1139b0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1139B0u;
    SET_GPR_U32(ctx, 31, 0x1139B8u);
    ctx->pc = 0x1139B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139B0u;
    // 0x1139b4: 0x24844510  addiu       $a0, $a0, 0x4510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1139B0u, 0x1139B8u)) {
        return;
    }
    ctx->pc = 0x1139B8u;
label_1139b8:
    // 0x1139b8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1139b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1139bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1139bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1139c0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1139C0u;
    SET_GPR_U32(ctx, 31, 0x1139C8u);
    ctx->pc = 0x1139C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139C0u;
    // 0x1139c4: 0x24844508  addiu       $a0, $a0, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1139C0u, 0x1139C8u)) {
        return;
    }
    ctx->pc = 0x1139C8u;
label_1139c8:
    // 0x1139c8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1139cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1139ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1139d0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1139D0u;
    SET_GPR_U32(ctx, 31, 0x1139D8u);
    ctx->pc = 0x1139D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139D0u;
    // 0x1139d4: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1139D0u, 0x1139D8u)) {
        return;
    }
    ctx->pc = 0x1139D8u;
label_1139d8:
    // 0x1139d8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1139d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1139dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1139dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1139e0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1139E0u;
    SET_GPR_U32(ctx, 31, 0x1139E8u);
    ctx->pc = 0x1139E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139E0u;
    // 0x1139e4: 0x248444f8  addiu       $a0, $a0, 0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1139E0u, 0x1139E8u)) {
        return;
    }
    ctx->pc = 0x1139E8u;
label_1139e8:
    // 0x1139e8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1139e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1139ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1139ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1139f0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1139F0u;
    SET_GPR_U32(ctx, 31, 0x1139F8u);
    ctx->pc = 0x1139F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139F0u;
    // 0x1139f4: 0x248444f0  addiu       $a0, $a0, 0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1139F0u, 0x1139F8u)) {
        return;
    }
    ctx->pc = 0x1139F8u;
label_1139f8:
    // 0x1139f8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1139f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1139fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1139fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a00: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x113A00u;
    SET_GPR_U32(ctx, 31, 0x113A08u);
    ctx->pc = 0x113A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A00u;
    // 0x113a04: 0x248444e8  addiu       $a0, $a0, 0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x113A00u, 0x113A08u)) {
        return;
    }
    ctx->pc = 0x113A08u;
label_113a08:
    // 0x113a08: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113a0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a10: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x113A10u;
    SET_GPR_U32(ctx, 31, 0x113A18u);
    ctx->pc = 0x113A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A10u;
    // 0x113a14: 0x248444e0  addiu       $a0, $a0, 0x44E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x113A10u, 0x113A18u)) {
        return;
    }
    ctx->pc = 0x113A18u;
label_113a18:
    // 0x113a18: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113a1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a20: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x113A20u;
    SET_GPR_U32(ctx, 31, 0x113A28u);
    ctx->pc = 0x113A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A20u;
    // 0x113a24: 0x248444d8  addiu       $a0, $a0, 0x44D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x113A20u, 0x113A28u)) {
        return;
    }
    ctx->pc = 0x113A28u;
label_113a28:
    // 0x113a28: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113a2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a30: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x113A30u;
    SET_GPR_U32(ctx, 31, 0x113A38u);
    ctx->pc = 0x113A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A30u;
    // 0x113a34: 0x248444d0  addiu       $a0, $a0, 0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x113A30u, 0x113A38u)) {
        return;
    }
    ctx->pc = 0x113A38u;
label_113a38:
    // 0x113a38: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x113a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x113a3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113a40: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x113A40u;
    SET_GPR_U32(ctx, 31, 0x113A48u);
    ctx->pc = 0x113A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113A40u;
    // 0x113a44: 0x248444c8  addiu       $a0, $a0, 0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x113A40u, 0x113A48u)) {
        return;
    }
    ctx->pc = 0x113A48u;
label_113a48:
    // 0x113a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113a4c:
    // 0x113a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x113A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A4Cu;
        // 0x113a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A54u;
    // 0x113a54: 0x0  nop
    ctx->pc = 0x113a54u;
    // NOP
    // 0x113a58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113a5c: 0x0  nop
    ctx->pc = 0x113a5cu;
    // NOP
    // 0x113a60: 0x0  nop
    ctx->pc = 0x113a60u;
    // NOP
    // 0x113a64: 0x0  nop
    ctx->pc = 0x113a64u;
    // NOP
    // 0x113a68: 0x0  nop
    ctx->pc = 0x113a68u;
    // NOP
    // 0x113a6c: 0x0  nop
    ctx->pc = 0x113a6cu;
    // NOP
    // 0x113a70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x113a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x113a74: 0x0  nop
    ctx->pc = 0x113a74u;
    // NOP
    ctx->pc = 0x113a78u;
}
