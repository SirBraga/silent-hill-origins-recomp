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

// Function: sub_001802F8
// Address: 0x1802f8 - 0x180450
void sub_001802F8_0x1802f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001802F8_0x1802f8");
#endif

    switch (ctx->pc) {
        case 0x180320u: goto label_180320;
        case 0x18032cu: goto label_18032c;
        case 0x180338u: goto label_180338;
        case 0x180344u: goto label_180344;
        case 0x180350u: goto label_180350;
        case 0x18035cu: goto label_18035c;
        case 0x180368u: goto label_180368;
        case 0x180374u: goto label_180374;
        case 0x180384u: goto label_180384;
        case 0x1803a8u: goto label_1803a8;
        case 0x1803bcu: goto label_1803bc;
        case 0x1803ccu: goto label_1803cc;
        case 0x1803dcu: goto label_1803dc;
        case 0x1803ecu: goto label_1803ec;
        case 0x1803fcu: goto label_1803fc;
        case 0x18040cu: goto label_18040c;
        case 0x18041cu: goto label_18041c;
        case 0x18042cu: goto label_18042c;
        case 0x18043cu: goto label_18043c;
        default: break;
    }

    ctx->pc = 0x1802f8u;

    // 0x1802f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1802f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1802fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1802fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x180300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180304: 0x14a2004d  bne         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x180304u;
    {
        const bool branch_taken_0x180304 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x180308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180304u;
        // 0x180308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180304) {
            ctx->pc = 0x18043Cu;
            goto label_18043c;
        }
    }
    ctx->pc = 0x18030Cu;
    // 0x18030c: 0x50800028  beql        $a0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x18030Cu;
    {
        const bool branch_taken_0x18030c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18030c) {
            ctx->pc = 0x180310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18030Cu;
            // 0x180310: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1803B0u;
            goto label_1803b0;
        }
    }
    ctx->pc = 0x180314u;
    // 0x180314: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180318: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x180318u;
    SET_GPR_U32(ctx, 31, 0x180320u);
    ctx->pc = 0x18031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180318u;
    // 0x18031c: 0x2484f9e8  addiu       $a0, $a0, -0x618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x180318u, 0x180320u)) {
        return;
    }
    ctx->pc = 0x180320u;
label_180320:
    // 0x180320: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180324: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x180324u;
    SET_GPR_U32(ctx, 31, 0x18032Cu);
    ctx->pc = 0x180328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180324u;
    // 0x180328: 0x2484f9f0  addiu       $a0, $a0, -0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x180324u, 0x18032Cu)) {
        return;
    }
    ctx->pc = 0x18032Cu;
label_18032c:
    // 0x18032c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18032cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180330: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x180330u;
    SET_GPR_U32(ctx, 31, 0x180338u);
    ctx->pc = 0x180334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180330u;
    // 0x180334: 0x2484f9f8  addiu       $a0, $a0, -0x608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x180330u, 0x180338u)) {
        return;
    }
    ctx->pc = 0x180338u;
label_180338:
    // 0x180338: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x18033c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18033Cu;
    SET_GPR_U32(ctx, 31, 0x180344u);
    ctx->pc = 0x180340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18033Cu;
    // 0x180340: 0x2484fa00  addiu       $a0, $a0, -0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18033Cu, 0x180344u)) {
        return;
    }
    ctx->pc = 0x180344u;
label_180344:
    // 0x180344: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180348: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x180348u;
    SET_GPR_U32(ctx, 31, 0x180350u);
    ctx->pc = 0x18034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180348u;
    // 0x18034c: 0x2484fa08  addiu       $a0, $a0, -0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x180348u, 0x180350u)) {
        return;
    }
    ctx->pc = 0x180350u;
label_180350:
    // 0x180350: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180354: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x180354u;
    SET_GPR_U32(ctx, 31, 0x18035Cu);
    ctx->pc = 0x180358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180354u;
    // 0x180358: 0x2484fa10  addiu       $a0, $a0, -0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x180354u, 0x18035Cu)) {
        return;
    }
    ctx->pc = 0x18035Cu;
label_18035c:
    // 0x18035c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18035cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180360: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x180360u;
    SET_GPR_U32(ctx, 31, 0x180368u);
    ctx->pc = 0x180364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180360u;
    // 0x180364: 0x2484fa18  addiu       $a0, $a0, -0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x180360u, 0x180368u)) {
        return;
    }
    ctx->pc = 0x180368u;
label_180368:
    // 0x180368: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x18036c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x18036Cu;
    SET_GPR_U32(ctx, 31, 0x180374u);
    ctx->pc = 0x180370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18036Cu;
    // 0x180370: 0x2484fa20  addiu       $a0, $a0, -0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x18036Cu, 0x180374u)) {
        return;
    }
    ctx->pc = 0x180374u;
label_180374:
    // 0x180374: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x180374u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x180378: 0x26107dc0  addiu       $s0, $s0, 0x7DC0
    ctx->pc = 0x180378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32192));
    // 0x18037c: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x18037Cu;
    SET_GPR_U32(ctx, 31, 0x180384u);
    ctx->pc = 0x180380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18037Cu;
    // 0x180380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x18037Cu, 0x180384u)) {
        return;
    }
    ctx->pc = 0x180384u;
label_180384:
    // 0x180384: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x180384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x180388: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x180388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x18038c: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x18038cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x180390: 0xac62fa28  sw          $v0, -0x5D8($v1)
    ctx->pc = 0x180390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BFA28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA28u, _value); } while (0);
    // 0x180394: 0x2484fa30  addiu       $a0, $a0, -0x5D0
    ctx->pc = 0x180394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    // 0x180398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18039c: 0x24c60450  addiu       $a2, $a2, 0x450
    ctx->pc = 0x18039cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1104));
    // 0x1803a0: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1803A0u;
    SET_GPR_U32(ctx, 31, 0x1803A8u);
    ctx->pc = 0x1803A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803A0u;
    // 0x1803a4: 0x24070048  addiu       $a3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1803A0u, 0x1803A8u)) {
        return;
    }
    ctx->pc = 0x1803A8u;
label_1803a8:
    // 0x1803a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1803A8u;
    {
        const bool branch_taken_0x1803a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1803ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803A8u;
        // 0x1803ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803a8) {
            ctx->pc = 0x180440u;
            goto label_180440;
        }
    }
    ctx->pc = 0x1803B0u;
label_1803b0:
    // 0x1803b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803b4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1803B4u;
    SET_GPR_U32(ctx, 31, 0x1803BCu);
    ctx->pc = 0x1803B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803B4u;
    // 0x1803b8: 0x2484fa30  addiu       $a0, $a0, -0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1803B4u, 0x1803BCu)) {
        return;
    }
    ctx->pc = 0x1803BCu;
label_1803bc:
    // 0x1803bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1803bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1803c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1803c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803c4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1803C4u;
    SET_GPR_U32(ctx, 31, 0x1803CCu);
    ctx->pc = 0x1803C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803C4u;
    // 0x1803c8: 0x2484fa20  addiu       $a0, $a0, -0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1803C4u, 0x1803CCu)) {
        return;
    }
    ctx->pc = 0x1803CCu;
label_1803cc:
    // 0x1803cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1803ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1803d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1803d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803d4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1803D4u;
    SET_GPR_U32(ctx, 31, 0x1803DCu);
    ctx->pc = 0x1803D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803D4u;
    // 0x1803d8: 0x2484fa18  addiu       $a0, $a0, -0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1803D4u, 0x1803DCu)) {
        return;
    }
    ctx->pc = 0x1803DCu;
label_1803dc:
    // 0x1803dc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1803e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1803e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803e4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1803E4u;
    SET_GPR_U32(ctx, 31, 0x1803ECu);
    ctx->pc = 0x1803E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803E4u;
    // 0x1803e8: 0x2484fa10  addiu       $a0, $a0, -0x5F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1803E4u, 0x1803ECu)) {
        return;
    }
    ctx->pc = 0x1803ECu;
label_1803ec:
    // 0x1803ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1803ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1803f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1803f4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1803F4u;
    SET_GPR_U32(ctx, 31, 0x1803FCu);
    ctx->pc = 0x1803F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803F4u;
    // 0x1803f8: 0x2484fa08  addiu       $a0, $a0, -0x5F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1803F4u, 0x1803FCu)) {
        return;
    }
    ctx->pc = 0x1803FCu;
label_1803fc:
    // 0x1803fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180404: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x180404u;
    SET_GPR_U32(ctx, 31, 0x18040Cu);
    ctx->pc = 0x180408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180404u;
    // 0x180408: 0x2484fa00  addiu       $a0, $a0, -0x600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x180404u, 0x18040Cu)) {
        return;
    }
    ctx->pc = 0x18040Cu;
label_18040c:
    // 0x18040c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18040cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180414: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x180414u;
    SET_GPR_U32(ctx, 31, 0x18041Cu);
    ctx->pc = 0x180418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180414u;
    // 0x180418: 0x2484f9f8  addiu       $a0, $a0, -0x608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x180414u, 0x18041Cu)) {
        return;
    }
    ctx->pc = 0x18041Cu;
label_18041c:
    // 0x18041c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180420: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180424: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x180424u;
    SET_GPR_U32(ctx, 31, 0x18042Cu);
    ctx->pc = 0x180428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180424u;
    // 0x180428: 0x2484f9f0  addiu       $a0, $a0, -0x610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x180424u, 0x18042Cu)) {
        return;
    }
    ctx->pc = 0x18042Cu;
label_18042c:
    // 0x18042c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18042cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x180430: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180434: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x180434u;
    SET_GPR_U32(ctx, 31, 0x18043Cu);
    ctx->pc = 0x180438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180434u;
    // 0x180438: 0x2484f9e8  addiu       $a0, $a0, -0x618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x180434u, 0x18043Cu)) {
        return;
    }
    ctx->pc = 0x18043Cu;
label_18043c:
    // 0x18043c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18043cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_180440:
    // 0x180440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180444: 0x3e00008  jr          $ra
    ctx->pc = 0x180444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180444u;
        // 0x180448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18044Cu;
    // 0x18044c: 0x0  nop
    ctx->pc = 0x18044cu;
    // NOP
    ctx->pc = 0x180450u;
}
