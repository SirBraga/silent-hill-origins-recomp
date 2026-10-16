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

// Function: sub_0011FF30
// Address: 0x11ff30 - 0x120200
void sub_0011FF30_0x11ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FF30_0x11ff30");
#endif

    switch (ctx->pc) {
        case 0x11ffb0u: goto label_11ffb0;
        case 0x11ffc4u: goto label_11ffc4;
        case 0x11ffdcu: goto label_11ffdc;
        case 0x11fff0u: goto label_11fff0;
        case 0x11fffcu: goto label_11fffc;
        case 0x120008u: goto label_120008;
        case 0x12001cu: goto label_12001c;
        case 0x120024u: goto label_120024;
        case 0x120038u: goto label_120038;
        case 0x120040u: goto label_120040;
        case 0x120050u: goto label_120050;
        case 0x120060u: goto label_120060;
        case 0x120070u: goto label_120070;
        case 0x120084u: goto label_120084;
        case 0x12008cu: goto label_12008c;
        case 0x120094u: goto label_120094;
        case 0x12009cu: goto label_12009c;
        case 0x1200acu: goto label_1200ac;
        case 0x1200bcu: goto label_1200bc;
        case 0x1200d4u: goto label_1200d4;
        case 0x1200e8u: goto label_1200e8;
        case 0x1200fcu: goto label_1200fc;
        case 0x12010cu: goto label_12010c;
        case 0x12011cu: goto label_12011c;
        case 0x120124u: goto label_120124;
        case 0x120138u: goto label_120138;
        case 0x120148u: goto label_120148;
        case 0x120170u: goto label_120170;
        case 0x120188u: goto label_120188;
        case 0x12019cu: goto label_12019c;
        case 0x1201a8u: goto label_1201a8;
        case 0x1201b4u: goto label_1201b4;
        case 0x1201c0u: goto label_1201c0;
        case 0x1201ccu: goto label_1201cc;
        default: break;
    }

    ctx->pc = 0x11ff30u;

    // 0x11ff30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11ff34: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x11ff38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x11ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x11ff3c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x11ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x11ff40: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x11ff40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x11ff44: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11ff44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x11ff48: 0x3c080069  lui         $t0, 0x69
    ctx->pc = 0x11ff48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)105 << 16));
    // 0x11ff4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11ff4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff50: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x11ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x11ff54: 0x2442c1c0  addiu       $v0, $v0, -0x3E40
    ctx->pc = 0x11ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951360));
    // 0x11ff58: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x11ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x11ff5c: 0x2463c0a0  addiu       $v1, $v1, -0x3F60
    ctx->pc = 0x11ff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951072));
    // 0x11ff60: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x11ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x11ff64: 0x24c6c060  addiu       $a2, $a2, -0x3FA0
    ctx->pc = 0x11ff64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951008));
    // 0x11ff68: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x11ff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x11ff6c: 0x24e7c048  addiu       $a3, $a3, -0x3FB8
    ctx->pc = 0x11ff6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950984));
    // 0x11ff70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x11ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x11ff74: 0x2508c1e0  addiu       $t0, $t0, -0x3E20
    ctx->pc = 0x11ff74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951392));
    // 0x11ff78: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x11ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x11ff7c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x11ff7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff80: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x11ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x11ff84: 0x26850044  addiu       $a1, $s4, 0x44
    ctx->pc = 0x11ff84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
    // 0x11ff88: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x11ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x11ff8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ff90: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x11ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x11ff94: 0xae830048  sw          $v1, 0x48($s4)
    ctx->pc = 0x11ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 72), GPR_U32(ctx, 3));
    // 0x11ff98: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x11ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x11ff9c: 0xae860084  sw          $a2, 0x84($s4)
    ctx->pc = 0x11ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 6));
    // 0x11ffa0: 0xae870314  sw          $a3, 0x314($s4)
    ctx->pc = 0x11ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 788), GPR_U32(ctx, 7));
    // 0x11ffa4: 0xae880034  sw          $t0, 0x34($s4)
    ctx->pc = 0x11ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 8));
    // 0x11ffa8: 0xc0544fe  jal         func_1513F8
    ctx->pc = 0x11FFA8u;
    SET_GPR_U32(ctx, 31, 0x11FFB0u);
    ctx->pc = 0x11FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFA8u;
    // 0x11ffac: 0x8c4484fc  lw          $a0, -0x7B04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1513F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1513F8u, 0x11FFA8u, 0x11FFB0u)) {
        return;
    }
    ctx->pc = 0x11FFB0u;
label_11ffb0:
    // 0x11ffb0: 0x8e840f6c  lw          $a0, 0xF6C($s4)
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3948)));
    // 0x11ffb4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FFB4u;
    {
        const bool branch_taken_0x11ffb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ffb4) {
            ctx->pc = 0x11FFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FFB4u;
            // 0x11ffb8: 0x8e840f70  lw          $a0, 0xF70($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FFCCu;
            goto label_11ffcc;
        }
    }
    ctx->pc = 0x11FFBCu;
    // 0x11ffbc: 0xc0503d0  jal         func_140F40
    ctx->pc = 0x11FFBCu;
    SET_GPR_U32(ctx, 31, 0x11FFC4u);
    ctx->pc = 0x11FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFBCu;
    // 0x11ffc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140F40u, 0x11FFBCu, 0x11FFC4u)) {
        return;
    }
    ctx->pc = 0x11FFC4u;
label_11ffc4:
    // 0x11ffc4: 0xae800f6c  sw          $zero, 0xF6C($s4)
    ctx->pc = 0x11ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3948), GPR_U32(ctx, 0));
    // 0x11ffc8: 0x8e840f70  lw          $a0, 0xF70($s4)
    ctx->pc = 0x11ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3952)));
label_11ffcc:
    // 0x11ffcc: 0x26910038  addiu       $s1, $s4, 0x38
    ctx->pc = 0x11ffccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x11ffd0: 0x26930bf0  addiu       $s3, $s4, 0xBF0
    ctx->pc = 0x11ffd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 3056));
    // 0x11ffd4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x11FFD4u;
    SET_GPR_U32(ctx, 31, 0x11FFDCu);
    ctx->pc = 0x11FFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFD4u;
    // 0x11ffd8: 0x26920bf8  addiu       $s2, $s4, 0xBF8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x11FFD4u, 0x11FFDCu)) {
        return;
    }
    ctx->pc = 0x11FFDCu;
label_11ffdc:
    // 0x11ffdc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x11ffdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffe0: 0x8e840f74  lw          $a0, 0xF74($s4)
    ctx->pc = 0x11ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3956)));
    // 0x11ffe4: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x11ffe4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffe8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x11FFE8u;
    SET_GPR_U32(ctx, 31, 0x11FFF0u);
    ctx->pc = 0x11FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFE8u;
    // 0x11ffec: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x11FFE8u, 0x11FFF0u)) {
        return;
    }
    ctx->pc = 0x11FFF0u;
label_11fff0:
    // 0x11fff0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11fff4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11FFF4u;
    SET_GPR_U32(ctx, 31, 0x11FFFCu);
    ctx->pc = 0x11FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFF4u;
    // 0x11fff8: 0x248445f8  addiu       $a0, $a0, 0x45F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11FFF4u, 0x11FFFCu)) {
        return;
    }
    ctx->pc = 0x11FFFCu;
label_11fffc:
    // 0x11fffc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x120000: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x120000u;
    SET_GPR_U32(ctx, 31, 0x120008u);
    ctx->pc = 0x120004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120000u;
    // 0x120004: 0x24844600  addiu       $a0, $a0, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x120000u, 0x120008u)) {
        return;
    }
    ctx->pc = 0x120008u;
label_120008:
    // 0x120008: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x120008u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x12000c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12000cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120010: 0x26104610  addiu       $s0, $s0, 0x4610
    ctx->pc = 0x120010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17936));
    // 0x120014: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120014u;
    SET_GPR_U32(ctx, 31, 0x12001Cu);
    ctx->pc = 0x120018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120014u;
    // 0x120018: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120014u, 0x12001Cu)) {
        return;
    }
    ctx->pc = 0x12001Cu;
label_12001c:
    // 0x12001c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12001Cu;
    SET_GPR_U32(ctx, 31, 0x120024u);
    ctx->pc = 0x120020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12001Cu;
    // 0x120020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12001Cu, 0x120024u)) {
        return;
    }
    ctx->pc = 0x120024u;
label_120024:
    // 0x120024: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x120024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x120028: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12002c: 0x26104618  addiu       $s0, $s0, 0x4618
    ctx->pc = 0x12002cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17944));
    // 0x120030: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120030u;
    SET_GPR_U32(ctx, 31, 0x120038u);
    ctx->pc = 0x120034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120030u;
    // 0x120034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120030u, 0x120038u)) {
        return;
    }
    ctx->pc = 0x120038u;
label_120038:
    // 0x120038: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x120038u;
    SET_GPR_U32(ctx, 31, 0x120040u);
    ctx->pc = 0x12003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120038u;
    // 0x12003c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x120038u, 0x120040u)) {
        return;
    }
    ctx->pc = 0x120040u;
label_120040:
    // 0x120040: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x120040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x120044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120048: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120048u;
    SET_GPR_U32(ctx, 31, 0x120050u);
    ctx->pc = 0x12004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120048u;
    // 0x12004c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120048u, 0x120050u)) {
        return;
    }
    ctx->pc = 0x120050u;
label_120050:
    // 0x120050: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x120050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x120054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120058: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120058u;
    SET_GPR_U32(ctx, 31, 0x120060u);
    ctx->pc = 0x12005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120058u;
    // 0x12005c: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120058u, 0x120060u)) {
        return;
    }
    ctx->pc = 0x120060u;
label_120060:
    // 0x120060: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x120060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x120064: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120068: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120068u;
    SET_GPR_U32(ctx, 31, 0x120070u);
    ctx->pc = 0x12006Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120068u;
    // 0x12006c: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120068u, 0x120070u)) {
        return;
    }
    ctx->pc = 0x120070u;
label_120070:
    // 0x120070: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x120070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x120074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x120074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120078: 0x2610f948  addiu       $s0, $s0, -0x6B8
    ctx->pc = 0x120078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965576));
    // 0x12007c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x12007Cu;
    SET_GPR_U32(ctx, 31, 0x120084u);
    ctx->pc = 0x120080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12007Cu;
    // 0x120080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x12007Cu, 0x120084u)) {
        return;
    }
    ctx->pc = 0x120084u;
label_120084:
    // 0x120084: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x120084u;
    SET_GPR_U32(ctx, 31, 0x12008Cu);
    ctx->pc = 0x120088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120084u;
    // 0x120088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x120084u, 0x12008Cu)) {
        return;
    }
    ctx->pc = 0x12008Cu;
label_12008c:
    // 0x12008c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x12008Cu;
    SET_GPR_U32(ctx, 31, 0x120094u);
    ctx->pc = 0x120090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12008Cu;
    // 0x120090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x12008Cu, 0x120094u)) {
        return;
    }
    ctx->pc = 0x120094u;
label_120094:
    // 0x120094: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x120094u;
    SET_GPR_U32(ctx, 31, 0x12009Cu);
    ctx->pc = 0x120098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120094u;
    // 0x120098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x120094u, 0x12009Cu)) {
        return;
    }
    ctx->pc = 0x12009Cu;
label_12009c:
    // 0x12009c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12009cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1200a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1200a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200a4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1200A4u;
    SET_GPR_U32(ctx, 31, 0x1200ACu);
    ctx->pc = 0x1200A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200A4u;
    // 0x1200a8: 0x24a586c8  addiu       $a1, $a1, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1200A4u, 0x1200ACu)) {
        return;
    }
    ctx->pc = 0x1200ACu;
label_1200ac:
    // 0x1200ac: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1200acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1200b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1200b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200b4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1200B4u;
    SET_GPR_U32(ctx, 31, 0x1200BCu);
    ctx->pc = 0x1200B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200B4u;
    // 0x1200b8: 0x24a586d0  addiu       $a1, $a1, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1200B4u, 0x1200BCu)) {
        return;
    }
    ctx->pc = 0x1200BCu;
label_1200bc:
    // 0x1200bc: 0x8e820c70  lw          $v0, 0xC70($s4)
    ctx->pc = 0x1200bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3184)));
    // 0x1200c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1200C0u;
    {
        const bool branch_taken_0x1200c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1200C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1200C0u;
        // 0x1200c4: 0x3c05006d  lui         $a1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1200c0) {
            ctx->pc = 0x1200F0u;
            goto label_1200f0;
        }
    }
    ctx->pc = 0x1200C8u;
    // 0x1200c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1200c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200cc: 0xc0496f8  jal         func_125BE0
    ctx->pc = 0x1200CCu;
    SET_GPR_U32(ctx, 31, 0x1200D4u);
    ctx->pc = 0x1200D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200CCu;
    // 0x1200d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125BE0u, 0x1200CCu, 0x1200D4u)) {
        return;
    }
    ctx->pc = 0x1200D4u;
label_1200d4:
    // 0x1200d4: 0x8e840c70  lw          $a0, 0xC70($s4)
    ctx->pc = 0x1200d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3184)));
    // 0x1200d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1200D8u;
    {
        const bool branch_taken_0x1200d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1200d8) {
            ctx->pc = 0x1200DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1200D8u;
            // 0x1200dc: 0xae800c70  sw          $zero, 0xC70($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 3184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1200ECu;
            goto label_1200ec;
        }
    }
    ctx->pc = 0x1200E0u;
    // 0x1200e0: 0xc0410c8  jal         func_104320
    ctx->pc = 0x1200E0u;
    SET_GPR_U32(ctx, 31, 0x1200E8u);
    ctx->pc = 0x1200E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200E0u;
    // 0x1200e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104320u, 0x1200E0u, 0x1200E8u)) {
        return;
    }
    ctx->pc = 0x1200E8u;
label_1200e8:
    // 0x1200e8: 0xae800c70  sw          $zero, 0xC70($s4)
    ctx->pc = 0x1200e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3184), GPR_U32(ctx, 0));
label_1200ec:
    // 0x1200ec: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x1200ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
label_1200f0:
    // 0x1200f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1200f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1200f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1200F4u;
    SET_GPR_U32(ctx, 31, 0x1200FCu);
    ctx->pc = 0x1200F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1200F4u;
    // 0x1200f8: 0x24a5bcf0  addiu       $a1, $a1, -0x4310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1200F4u, 0x1200FCu)) {
        return;
    }
    ctx->pc = 0x1200FCu;
label_1200fc:
    // 0x1200fc: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x1200fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x120100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120104: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120104u;
    SET_GPR_U32(ctx, 31, 0x12010Cu);
    ctx->pc = 0x120108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120104u;
    // 0x120108: 0x24a5bcf8  addiu       $a1, $a1, -0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120104u, 0x12010Cu)) {
        return;
    }
    ctx->pc = 0x12010Cu;
label_12010c:
    // 0x12010c: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x12010cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x120110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x120110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120114: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x120114u;
    SET_GPR_U32(ctx, 31, 0x12011Cu);
    ctx->pc = 0x120118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120114u;
    // 0x120118: 0x24a5bd00  addiu       $a1, $a1, -0x4300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x120114u, 0x12011Cu)) {
        return;
    }
    ctx->pc = 0x12011Cu;
label_12011c:
    // 0x12011c: 0xc049738  jal         func_125CE0
    ctx->pc = 0x12011Cu;
    SET_GPR_U32(ctx, 31, 0x120124u);
    ctx->pc = 0x120120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12011Cu;
    // 0x120120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125CE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125CE0u, 0x12011Cu, 0x120124u)) {
        return;
    }
    ctx->pc = 0x120124u;
label_120124:
    // 0x120124: 0x8e840eac  lw          $a0, 0xEAC($s4)
    ctx->pc = 0x120124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3756)));
    // 0x120128: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x120128u;
    {
        const bool branch_taken_0x120128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120128) {
            ctx->pc = 0x12012Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120128u;
            // 0x12012c: 0x26840f84  addiu       $a0, $s4, 0xF84 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3972));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120140u;
            goto label_120140;
        }
    }
    ctx->pc = 0x120130u;
    // 0x120130: 0xc059c06  jal         func_167018
    ctx->pc = 0x120130u;
    SET_GPR_U32(ctx, 31, 0x120138u);
    ctx->pc = 0x120134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120130u;
    // 0x120134: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167018u, 0x120130u, 0x120138u)) {
        return;
    }
    ctx->pc = 0x120138u;
label_120138:
    // 0x120138: 0xae800eac  sw          $zero, 0xEAC($s4)
    ctx->pc = 0x120138u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3756), GPR_U32(ctx, 0));
    // 0x12013c: 0x26840f84  addiu       $a0, $s4, 0xF84
    ctx->pc = 0x12013cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3972));
label_120140:
    // 0x120140: 0xc04191e  jal         func_106478
    ctx->pc = 0x120140u;
    SET_GPR_U32(ctx, 31, 0x120148u);
    ctx->pc = 0x120144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120140u;
    // 0x120144: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106478u, 0x120140u, 0x120148u)) {
        return;
    }
    ctx->pc = 0x120148u;
label_120148:
    // 0x120148: 0x26920f00  addiu       $s2, $s4, 0xF00
    ctx->pc = 0x120148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 3840));
    // 0x12014c: 0x26930320  addiu       $s3, $s4, 0x320
    ctx->pc = 0x12014cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
    // 0x120150: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x120150u;
    {
        const bool branch_taken_0x120150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x120154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120150u;
        // 0x120154: 0x26950310  addiu       $s5, $s4, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120150) {
            ctx->pc = 0x120190u;
            goto label_120190;
        }
    }
    ctx->pc = 0x120158u;
    // 0x120158: 0x26900f30  addiu       $s0, $s4, 0xF30
    ctx->pc = 0x120158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 3888));
    // 0x12015c: 0x1250000d  beq         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x12015Cu;
    {
        const bool branch_taken_0x12015c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x120160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12015Cu;
        // 0x120160: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12015c) {
            ctx->pc = 0x120194u;
            goto label_120194;
        }
    }
    ctx->pc = 0x120164u;
    // 0x120164: 0x3c11dead  lui         $s1, 0xDEAD
    ctx->pc = 0x120164u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57005 << 16));
    // 0x120168: 0x3631face  ori         $s1, $s1, 0xFACE
    ctx->pc = 0x120168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)64206);
    // 0x12016c: 0x0  nop
    ctx->pc = 0x12016cu;
    // NOP
label_120170:
    // 0x120170: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x120170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x120174: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x120174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x120178: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x120178u;
    {
        const bool branch_taken_0x120178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120178) {
            ctx->pc = 0x120188u;
            goto label_120188;
        }
    }
    ctx->pc = 0x120180u;
    // 0x120180: 0xc054056  jal         func_150158
    ctx->pc = 0x120180u;
    SET_GPR_U32(ctx, 31, 0x120188u);
    ctx->pc = 0x120184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120180u;
    // 0x120184: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150158u, 0x120180u, 0x120188u)) {
        return;
    }
    ctx->pc = 0x120188u;
label_120188:
    // 0x120188: 0x1650fff9  bne         $s2, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x120188u;
    {
        const bool branch_taken_0x120188 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x12018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120188u;
        // 0x12018c: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120188) {
            ctx->pc = 0x120170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120170;
        }
    }
    ctx->pc = 0x120190u;
label_120190:
    // 0x120190: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x120190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_120194:
    // 0x120194: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x120194u;
    SET_GPR_U32(ctx, 31, 0x12019Cu);
    ctx->pc = 0x120198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120194u;
    // 0x120198: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x120194u, 0x12019Cu)) {
        return;
    }
    ctx->pc = 0x12019Cu;
label_12019c:
    // 0x12019c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201a0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1201A0u;
    SET_GPR_U32(ctx, 31, 0x1201A8u);
    ctx->pc = 0x1201A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201A0u;
    // 0x1201a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1201A0u, 0x1201A8u)) {
        return;
    }
    ctx->pc = 0x1201A8u;
label_1201a8:
    // 0x1201a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1201a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201ac: 0xc067f64  jal         func_19FD90
    ctx->pc = 0x1201ACu;
    SET_GPR_U32(ctx, 31, 0x1201B4u);
    ctx->pc = 0x1201B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201ACu;
    // 0x1201b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FD90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FD90u, 0x1201ACu, 0x1201B4u)) {
        return;
    }
    ctx->pc = 0x1201B4u;
label_1201b4:
    // 0x1201b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1201b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201b8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x1201B8u;
    SET_GPR_U32(ctx, 31, 0x1201C0u);
    ctx->pc = 0x1201BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201B8u;
    // 0x1201bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F158u, 0x1201B8u, 0x1201C0u)) {
        return;
    }
    ctx->pc = 0x1201C0u;
label_1201c0:
    // 0x1201c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1201c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1201c4: 0xc0400d0  jal         func_100340
    ctx->pc = 0x1201C4u;
    SET_GPR_U32(ctx, 31, 0x1201CCu);
    ctx->pc = 0x1201C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1201C4u;
    // 0x1201c8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x100340u, 0x1201C4u, 0x1201CCu)) {
        return;
    }
    ctx->pc = 0x1201CCu;
label_1201cc:
    // 0x1201cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1201ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1201d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1201d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1201d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1201d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1201d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1201d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1201dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1201dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1201e0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1201e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1201e4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1201e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1201e8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1201e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1201ec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1201ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1201f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1201f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1201f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1201F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1201F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1201F4u;
        // 0x1201f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1201F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1201FCu;
    // 0x1201fc: 0x0  nop
    ctx->pc = 0x1201fcu;
    // NOP
    ctx->pc = 0x120200u;
}
