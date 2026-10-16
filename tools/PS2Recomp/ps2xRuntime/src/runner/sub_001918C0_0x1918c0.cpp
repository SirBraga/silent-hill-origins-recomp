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

// Function: sub_001918C0
// Address: 0x1918c0 - 0x191b50
void sub_001918C0_0x1918c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001918C0_0x1918c0");
#endif

    switch (ctx->pc) {
        case 0x1918c0u: goto label_1918c0;
        case 0x1918c4u: goto label_1918c4;
        case 0x1918c8u: goto label_1918c8;
        case 0x1918ccu: goto label_1918cc;
        case 0x1918d0u: goto label_1918d0;
        case 0x1918d4u: goto label_1918d4;
        case 0x1918d8u: goto label_1918d8;
        case 0x1918dcu: goto label_1918dc;
        case 0x1918e0u: goto label_1918e0;
        case 0x1918e4u: goto label_1918e4;
        case 0x1918e8u: goto label_1918e8;
        case 0x1918ecu: goto label_1918ec;
        case 0x1918f0u: goto label_1918f0;
        case 0x1918f4u: goto label_1918f4;
        case 0x1918f8u: goto label_1918f8;
        case 0x1918fcu: goto label_1918fc;
        case 0x191900u: goto label_191900;
        case 0x191904u: goto label_191904;
        case 0x191908u: goto label_191908;
        case 0x19190cu: goto label_19190c;
        case 0x191910u: goto label_191910;
        case 0x191914u: goto label_191914;
        case 0x191918u: goto label_191918;
        case 0x19191cu: goto label_19191c;
        case 0x191920u: goto label_191920;
        case 0x191924u: goto label_191924;
        case 0x191928u: goto label_191928;
        case 0x19192cu: goto label_19192c;
        case 0x191930u: goto label_191930;
        case 0x191934u: goto label_191934;
        case 0x191938u: goto label_191938;
        case 0x19193cu: goto label_19193c;
        case 0x191940u: goto label_191940;
        case 0x191944u: goto label_191944;
        case 0x191948u: goto label_191948;
        case 0x19194cu: goto label_19194c;
        case 0x191950u: goto label_191950;
        case 0x191954u: goto label_191954;
        case 0x191958u: goto label_191958;
        case 0x19195cu: goto label_19195c;
        case 0x191960u: goto label_191960;
        case 0x191964u: goto label_191964;
        case 0x191968u: goto label_191968;
        case 0x19196cu: goto label_19196c;
        case 0x191970u: goto label_191970;
        case 0x191974u: goto label_191974;
        case 0x191978u: goto label_191978;
        case 0x19197cu: goto label_19197c;
        case 0x191980u: goto label_191980;
        case 0x191984u: goto label_191984;
        case 0x191988u: goto label_191988;
        case 0x19198cu: goto label_19198c;
        case 0x191990u: goto label_191990;
        case 0x191994u: goto label_191994;
        case 0x191998u: goto label_191998;
        case 0x19199cu: goto label_19199c;
        case 0x1919a0u: goto label_1919a0;
        case 0x1919a4u: goto label_1919a4;
        case 0x1919a8u: goto label_1919a8;
        case 0x1919acu: goto label_1919ac;
        case 0x1919b0u: goto label_1919b0;
        case 0x1919b4u: goto label_1919b4;
        case 0x1919b8u: goto label_1919b8;
        case 0x1919bcu: goto label_1919bc;
        case 0x1919c0u: goto label_1919c0;
        case 0x1919c4u: goto label_1919c4;
        case 0x1919c8u: goto label_1919c8;
        case 0x1919ccu: goto label_1919cc;
        case 0x1919d0u: goto label_1919d0;
        case 0x1919d4u: goto label_1919d4;
        case 0x1919d8u: goto label_1919d8;
        case 0x1919dcu: goto label_1919dc;
        case 0x1919e0u: goto label_1919e0;
        case 0x1919e4u: goto label_1919e4;
        case 0x1919e8u: goto label_1919e8;
        case 0x1919ecu: goto label_1919ec;
        case 0x1919f0u: goto label_1919f0;
        case 0x1919f4u: goto label_1919f4;
        case 0x1919f8u: goto label_1919f8;
        case 0x1919fcu: goto label_1919fc;
        case 0x191a00u: goto label_191a00;
        case 0x191a04u: goto label_191a04;
        case 0x191a08u: goto label_191a08;
        case 0x191a0cu: goto label_191a0c;
        case 0x191a10u: goto label_191a10;
        case 0x191a14u: goto label_191a14;
        case 0x191a18u: goto label_191a18;
        case 0x191a1cu: goto label_191a1c;
        case 0x191a20u: goto label_191a20;
        case 0x191a24u: goto label_191a24;
        case 0x191a28u: goto label_191a28;
        case 0x191a2cu: goto label_191a2c;
        case 0x191a30u: goto label_191a30;
        case 0x191a34u: goto label_191a34;
        case 0x191a38u: goto label_191a38;
        case 0x191a3cu: goto label_191a3c;
        case 0x191a40u: goto label_191a40;
        case 0x191a44u: goto label_191a44;
        case 0x191a48u: goto label_191a48;
        case 0x191a4cu: goto label_191a4c;
        case 0x191a50u: goto label_191a50;
        case 0x191a54u: goto label_191a54;
        case 0x191a58u: goto label_191a58;
        case 0x191a5cu: goto label_191a5c;
        case 0x191a60u: goto label_191a60;
        case 0x191a64u: goto label_191a64;
        case 0x191a68u: goto label_191a68;
        case 0x191a6cu: goto label_191a6c;
        case 0x191a70u: goto label_191a70;
        case 0x191a74u: goto label_191a74;
        case 0x191a78u: goto label_191a78;
        case 0x191a7cu: goto label_191a7c;
        case 0x191a80u: goto label_191a80;
        case 0x191a84u: goto label_191a84;
        case 0x191a88u: goto label_191a88;
        case 0x191a8cu: goto label_191a8c;
        case 0x191a90u: goto label_191a90;
        case 0x191a94u: goto label_191a94;
        case 0x191a98u: goto label_191a98;
        case 0x191a9cu: goto label_191a9c;
        case 0x191aa0u: goto label_191aa0;
        case 0x191aa4u: goto label_191aa4;
        case 0x191aa8u: goto label_191aa8;
        case 0x191aacu: goto label_191aac;
        case 0x191ab0u: goto label_191ab0;
        case 0x191ab4u: goto label_191ab4;
        case 0x191ab8u: goto label_191ab8;
        case 0x191abcu: goto label_191abc;
        case 0x191ac0u: goto label_191ac0;
        case 0x191ac4u: goto label_191ac4;
        case 0x191ac8u: goto label_191ac8;
        case 0x191accu: goto label_191acc;
        case 0x191ad0u: goto label_191ad0;
        case 0x191ad4u: goto label_191ad4;
        case 0x191ad8u: goto label_191ad8;
        case 0x191adcu: goto label_191adc;
        case 0x191ae0u: goto label_191ae0;
        case 0x191ae4u: goto label_191ae4;
        case 0x191ae8u: goto label_191ae8;
        case 0x191aecu: goto label_191aec;
        case 0x191af0u: goto label_191af0;
        case 0x191af4u: goto label_191af4;
        case 0x191af8u: goto label_191af8;
        case 0x191afcu: goto label_191afc;
        case 0x191b00u: goto label_191b00;
        case 0x191b04u: goto label_191b04;
        case 0x191b08u: goto label_191b08;
        case 0x191b0cu: goto label_191b0c;
        case 0x191b10u: goto label_191b10;
        case 0x191b14u: goto label_191b14;
        case 0x191b18u: goto label_191b18;
        case 0x191b1cu: goto label_191b1c;
        case 0x191b20u: goto label_191b20;
        case 0x191b24u: goto label_191b24;
        case 0x191b28u: goto label_191b28;
        case 0x191b2cu: goto label_191b2c;
        case 0x191b30u: goto label_191b30;
        case 0x191b34u: goto label_191b34;
        case 0x191b38u: goto label_191b38;
        case 0x191b3cu: goto label_191b3c;
        case 0x191b40u: goto label_191b40;
        case 0x191b44u: goto label_191b44;
        case 0x191b48u: goto label_191b48;
        case 0x191b4cu: goto label_191b4c;
        default: break;
    }

    ctx->pc = 0x1918c0u;

label_1918c0:
    // 0x1918c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1918c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1918c4:
    // 0x1918c4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1918c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1918c8:
    // 0x1918c8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1918c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1918cc:
    // 0x1918cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1918ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1918d0:
    // 0x1918d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1918d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1918d4:
    // 0x1918d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1918d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1918d8:
    // 0x1918d8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1918d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1918dc:
    // 0x1918dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1918dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1918e0:
    // 0x1918e0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1918e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1918e4:
    // 0x1918e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1918e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1918e8:
    // 0x1918e8: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x1918e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_1918ec:
    // 0x1918ec: 0x10a0008e  beqz        $a1, . + 4 + (0x8E << 2)
label_1918f0:
    if (ctx->pc == 0x1918F0u) {
        ctx->pc = 0x1918F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918ECu;
        // 0x1918f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1918F4u;
        goto label_1918f4;
    }
    ctx->pc = 0x1918ECu;
    {
        const bool branch_taken_0x1918ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1918F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918ECu;
        // 0x1918f0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918ec) {
            ctx->pc = 0x191B28u;
            goto label_191b28;
        }
    }
    ctx->pc = 0x1918F4u;
label_1918f4:
    // 0x1918f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1918f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1918f8:
    // 0x1918f8: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x1918f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1918fc:
    // 0x1918fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_191900:
    if (ctx->pc == 0x191900u) {
        ctx->pc = 0x191900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918FCu;
        // 0x191900: 0x245595b8  addiu       $s5, $v0, -0x6A48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191904u;
        goto label_191904;
    }
    ctx->pc = 0x1918FCu;
    {
        const bool branch_taken_0x1918fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1918FCu;
        // 0x191900: 0x245595b8  addiu       $s5, $v0, -0x6A48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1918fc) {
            ctx->pc = 0x19192Cu;
            goto label_19192c;
        }
    }
    ctx->pc = 0x191904u;
label_191904:
    // 0x191904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x191904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_191908:
    // 0x191908: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x191908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_19190c:
    // 0x19190c: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x19190cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
label_191910:
    // 0x191910: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x191910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
label_191914:
    // 0x191914: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x191914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_191918:
    // 0x191918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19191c:
    // 0x19191c: 0xc07fc98  jal         func_1FF260
label_191920:
    if (ctx->pc == 0x191920u) {
        ctx->pc = 0x191920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19191Cu;
        // 0x191920: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191924u;
        goto label_191924;
    }
    ctx->pc = 0x19191Cu;
    SET_GPR_U32(ctx, 31, 0x191924u);
    ctx->pc = 0x191920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19191Cu;
    // 0x191920: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x19191Cu, 0x191924u)) {
        return;
    }
    ctx->pc = 0x191924u;
label_191924:
    // 0x191924: 0x10000005  b           . + 4 + (0x5 << 2)
label_191928:
    if (ctx->pc == 0x191928u) {
        ctx->pc = 0x191928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191924u;
        // 0x191928: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19192Cu;
        goto label_19192c;
    }
    ctx->pc = 0x191924u;
    {
        const bool branch_taken_0x191924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191924u;
        // 0x191928: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191924) {
            ctx->pc = 0x19193Cu;
            goto label_19193c;
        }
    }
    ctx->pc = 0x19192Cu;
label_19192c:
    // 0x19192c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_191930:
    // 0x191930: 0xc05ee9a  jal         func_17BA68
label_191934:
    if (ctx->pc == 0x191934u) {
        ctx->pc = 0x191934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191930u;
        // 0x191934: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191938u;
        goto label_191938;
    }
    ctx->pc = 0x191930u;
    SET_GPR_U32(ctx, 31, 0x191938u);
    ctx->pc = 0x191934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191930u;
    // 0x191934: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BA68u, 0x191930u, 0x191938u)) {
        return;
    }
    ctx->pc = 0x191938u;
label_191938:
    // 0x191938: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x191938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_19193c:
    // 0x19193c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_191940:
    if (ctx->pc == 0x191940u) {
        ctx->pc = 0x191940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19193Cu;
        // 0x191940: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191944u;
        goto label_191944;
    }
    ctx->pc = 0x19193Cu;
    {
        const bool branch_taken_0x19193c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x191940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19193Cu;
        // 0x191940: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19193c) {
            ctx->pc = 0x191960u;
            goto label_191960;
        }
    }
    ctx->pc = 0x191944u;
label_191944:
    // 0x191944: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x191944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_191948:
    // 0x191948: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19194c:
    if (ctx->pc == 0x19194Cu) {
        ctx->pc = 0x19194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191948u;
        // 0x19194c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191950u;
        goto label_191950;
    }
    ctx->pc = 0x191948u;
    {
        const bool branch_taken_0x191948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191948) {
            ctx->pc = 0x19194Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191948u;
            // 0x19194c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191964u;
            goto label_191964;
        }
    }
    ctx->pc = 0x191950u;
label_191950:
    // 0x191950: 0xc09799a  jal         func_25E668
label_191954:
    if (ctx->pc == 0x191954u) {
        ctx->pc = 0x191958u;
        goto label_191958;
    }
    ctx->pc = 0x191950u;
    SET_GPR_U32(ctx, 31, 0x191958u);
    ctx->pc = 0x25E668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E668u, 0x191950u, 0x191958u)) {
        return;
    }
    ctx->pc = 0x191958u;
label_191958:
    // 0x191958: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x191958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_19195c:
    // 0x19195c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x19195cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_191960:
    // 0x191960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_191964:
    // 0x191964: 0x8c508b2c  lw          $s0, -0x74D4($v0)
    ctx->pc = 0x191964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_191968:
    // 0x191968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19196c:
    // 0x19196c: 0xc064110  jal         func_190440
label_191970:
    if (ctx->pc == 0x191970u) {
        ctx->pc = 0x191970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19196Cu;
        // 0x191970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191974u;
        goto label_191974;
    }
    ctx->pc = 0x19196Cu;
    SET_GPR_U32(ctx, 31, 0x191974u);
    ctx->pc = 0x191970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19196Cu;
    // 0x191970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190440u, 0x19196Cu, 0x191974u)) {
        return;
    }
    ctx->pc = 0x191974u;
label_191974:
    // 0x191974: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_191978:
    if (ctx->pc == 0x191978u) {
        ctx->pc = 0x191978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191974u;
        // 0x191978: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19197Cu;
        goto label_19197c;
    }
    ctx->pc = 0x191974u;
    {
        const bool branch_taken_0x191974 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x191978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191974u;
        // 0x191978: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191974) {
            ctx->pc = 0x191990u;
            goto label_191990;
        }
    }
    ctx->pc = 0x19197Cu;
label_19197c:
    // 0x19197c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19197cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191980:
    // 0x191980: 0xc0644dc  jal         func_191370
label_191984:
    if (ctx->pc == 0x191984u) {
        ctx->pc = 0x191984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191980u;
        // 0x191984: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191988u;
        goto label_191988;
    }
    ctx->pc = 0x191980u;
    SET_GPR_U32(ctx, 31, 0x191988u);
    ctx->pc = 0x191984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191980u;
    // 0x191984: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x191980u, 0x191988u)) {
        return;
    }
    ctx->pc = 0x191988u;
label_191988:
    // 0x191988: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x191988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_19198c:
    // 0x19198c: 0x245595d0  addiu       $s5, $v0, -0x6A30
    ctx->pc = 0x19198cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940112));
label_191990:
    // 0x191990: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x191990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_191994:
    // 0x191994: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_191998:
    if (ctx->pc == 0x191998u) {
        ctx->pc = 0x191998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191994u;
        // 0x191998: 0xae3300fc  sw          $s3, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19199Cu;
        goto label_19199c;
    }
    ctx->pc = 0x191994u;
    {
        const bool branch_taken_0x191994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191994u;
        // 0x191998: 0xae3300fc  sw          $s3, 0xFC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191994) {
            ctx->pc = 0x1919CCu;
            goto label_1919cc;
        }
    }
    ctx->pc = 0x19199Cu;
label_19199c:
    // 0x19199c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1919a0:
    // 0x1919a0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1919a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1919a4:
    // 0x1919a4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1919a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1919a8:
    // 0x1919a8: 0x60f809  jalr        $v1
label_1919ac:
    if (ctx->pc == 0x1919ACu) {
        ctx->pc = 0x1919ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919A8u;
        // 0x1919ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919B0u;
        goto label_1919b0;
    }
    ctx->pc = 0x1919A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1919B0u);
        ctx->pc = 0x1919ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919A8u;
        // 0x1919ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1919A8u, 0x1919B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1919B0u;
label_1919b0:
    // 0x1919b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1919b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1919b4:
    // 0x1919b4: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1919b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_1919b8:
    // 0x1919b8: 0x1080004e  beqz        $a0, . + 4 + (0x4E << 2)
label_1919bc:
    if (ctx->pc == 0x1919BCu) {
        ctx->pc = 0x1919BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B8u;
        // 0x1919bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919C0u;
        goto label_1919c0;
    }
    ctx->pc = 0x1919B8u;
    {
        const bool branch_taken_0x1919b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919B8u;
        // 0x1919bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919b8) {
            ctx->pc = 0x191AF4u;
            goto label_191af4;
        }
    }
    ctx->pc = 0x1919C0u;
label_1919c0:
    // 0x1919c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1919c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1919c4:
    // 0x1919c4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1919c8:
    if (ctx->pc == 0x1919C8u) {
        ctx->pc = 0x1919C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919C4u;
        // 0x1919c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919CCu;
        goto label_1919cc;
    }
    ctx->pc = 0x1919C4u;
    {
        const bool branch_taken_0x1919c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919C4u;
        // 0x1919c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919c4) {
            ctx->pc = 0x191A84u;
            goto label_191a84;
        }
    }
    ctx->pc = 0x1919CCu;
label_1919cc:
    // 0x1919cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1919ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1919d0:
    // 0x1919d0: 0xc07cd92  jal         func_1F3648
label_1919d4:
    if (ctx->pc == 0x1919D4u) {
        ctx->pc = 0x1919D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D0u;
        // 0x1919d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919D8u;
        goto label_1919d8;
    }
    ctx->pc = 0x1919D0u;
    SET_GPR_U32(ctx, 31, 0x1919D8u);
    ctx->pc = 0x1919D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919D0u;
    // 0x1919d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1919D0u, 0x1919D8u)) {
        return;
    }
    ctx->pc = 0x1919D8u;
label_1919d8:
    // 0x1919d8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1919dc:
    if (ctx->pc == 0x1919DCu) {
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D8u;
        // 0x1919dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919E0u;
        goto label_1919e0;
    }
    ctx->pc = 0x1919D8u;
    {
        const bool branch_taken_0x1919d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1919DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919D8u;
        // 0x1919dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1919d8) {
            ctx->pc = 0x1919ECu;
            goto label_1919ec;
        }
    }
    ctx->pc = 0x1919E0u;
label_1919e0:
    // 0x1919e0: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x1919e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_1919e4:
    // 0x1919e4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_1919e8:
    if (ctx->pc == 0x1919E8u) {
        ctx->pc = 0x1919ECu;
        goto label_1919ec;
    }
    ctx->pc = 0x1919E4u;
    {
        const bool branch_taken_0x1919e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1919e4) {
            ctx->pc = 0x1919F0u;
            goto label_1919f0;
        }
    }
    ctx->pc = 0x1919ECu;
label_1919ec:
    // 0x1919ec: 0x8e2400cc  lw          $a0, 0xCC($s1)
    ctx->pc = 0x1919ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_1919f0:
    // 0x1919f0: 0xc07cd92  jal         func_1F3648
label_1919f4:
    if (ctx->pc == 0x1919F4u) {
        ctx->pc = 0x1919F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919F0u;
        // 0x1919f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1919F8u;
        goto label_1919f8;
    }
    ctx->pc = 0x1919F0u;
    SET_GPR_U32(ctx, 31, 0x1919F8u);
    ctx->pc = 0x1919F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919F0u;
    // 0x1919f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1919F0u, 0x1919F8u)) {
        return;
    }
    ctx->pc = 0x1919F8u;
label_1919f8:
    // 0x1919f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1919f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1919fc:
    // 0x1919fc: 0xc0c5dc0  jal         func_317700
label_191a00:
    if (ctx->pc == 0x191A00u) {
        ctx->pc = 0x191A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1919FCu;
        // 0x191a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A04u;
        goto label_191a04;
    }
    ctx->pc = 0x1919FCu;
    SET_GPR_U32(ctx, 31, 0x191A04u);
    ctx->pc = 0x191A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1919FCu;
    // 0x191a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x1919FCu, 0x191A04u)) {
        return;
    }
    ctx->pc = 0x191A04u;
label_191a04:
    // 0x191a04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191a08:
    // 0x191a08: 0xc0c5dc0  jal         func_317700
label_191a0c:
    if (ctx->pc == 0x191A0Cu) {
        ctx->pc = 0x191A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A08u;
        // 0x191a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A10u;
        goto label_191a10;
    }
    ctx->pc = 0x191A08u;
    SET_GPR_U32(ctx, 31, 0x191A10u);
    ctx->pc = 0x191A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A08u;
    // 0x191a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317700u, 0x191A08u, 0x191A10u)) {
        return;
    }
    ctx->pc = 0x191A10u;
label_191a10:
    // 0x191a10: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x191a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_191a14:
    // 0x191a14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191a18:
    // 0x191a18: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x191a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_191a1c:
    // 0x191a1c: 0xc080924  jal         func_202490
label_191a20:
    if (ctx->pc == 0x191A20u) {
        ctx->pc = 0x191A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A1Cu;
        // 0x191a20: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A24u;
        goto label_191a24;
    }
    ctx->pc = 0x191A1Cu;
    SET_GPR_U32(ctx, 31, 0x191A24u);
    ctx->pc = 0x191A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A1Cu;
    // 0x191a20: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x191A1Cu, 0x191A24u)) {
        return;
    }
    ctx->pc = 0x191A24u;
label_191a24:
    // 0x191a24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x191a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191a28:
    // 0x191a28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191a2c:
    // 0x191a2c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x191a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_191a30:
    // 0x191a30: 0xc0c5380  jal         func_314E00
label_191a34:
    if (ctx->pc == 0x191A34u) {
        ctx->pc = 0x191A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A30u;
        // 0x191a34: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A38u;
        goto label_191a38;
    }
    ctx->pc = 0x191A30u;
    SET_GPR_U32(ctx, 31, 0x191A38u);
    ctx->pc = 0x191A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A30u;
    // 0x191a34: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314E00u, 0x191A30u, 0x191A38u)) {
        return;
    }
    ctx->pc = 0x191A38u;
label_191a38:
    // 0x191a38: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x191a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_191a3c:
    // 0x191a3c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_191a40:
    if (ctx->pc == 0x191A40u) {
        ctx->pc = 0x191A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A3Cu;
        // 0x191a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A44u;
        goto label_191a44;
    }
    ctx->pc = 0x191A3Cu;
    {
        const bool branch_taken_0x191a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A3Cu;
        // 0x191a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a3c) {
            ctx->pc = 0x191A94u;
            goto label_191a94;
        }
    }
    ctx->pc = 0x191A44u;
label_191a44:
    // 0x191a44: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x191a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_191a48:
    // 0x191a48: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x191a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
label_191a4c:
    // 0x191a4c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x191a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_191a50:
    // 0x191a50: 0x24a58898  addiu       $a1, $a1, -0x7768
    ctx->pc = 0x191a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
label_191a54:
    // 0x191a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191a58:
    // 0x191a58: 0xc07fc98  jal         func_1FF260
label_191a5c:
    if (ctx->pc == 0x191A5Cu) {
        ctx->pc = 0x191A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A58u;
        // 0x191a5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A60u;
        goto label_191a60;
    }
    ctx->pc = 0x191A58u;
    SET_GPR_U32(ctx, 31, 0x191A60u);
    ctx->pc = 0x191A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A58u;
    // 0x191a5c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x191A58u, 0x191A60u)) {
        return;
    }
    ctx->pc = 0x191A60u;
label_191a60:
    // 0x191a60: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x191a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_191a64:
    // 0x191a64: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x191a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_191a68:
    // 0x191a68: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_191a6c:
    if (ctx->pc == 0x191A6Cu) {
        ctx->pc = 0x191A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A68u;
        // 0x191a6c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A70u;
        goto label_191a70;
    }
    ctx->pc = 0x191A68u;
    {
        const bool branch_taken_0x191a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A68u;
        // 0x191a6c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a68) {
            ctx->pc = 0x191AF4u;
            goto label_191af4;
        }
    }
    ctx->pc = 0x191A70u;
label_191a70:
    // 0x191a70: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x191a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_191a74:
    // 0x191a74: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x191a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_191a78:
    // 0x191a78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_191a7c:
    // 0x191a7c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x191a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_191a80:
    // 0x191a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191a84:
    // 0x191a84: 0xc06c24c  jal         func_1B0930
label_191a88:
    if (ctx->pc == 0x191A88u) {
        ctx->pc = 0x191A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A84u;
        // 0x191a88: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A8Cu;
        goto label_191a8c;
    }
    ctx->pc = 0x191A84u;
    SET_GPR_U32(ctx, 31, 0x191A8Cu);
    ctx->pc = 0x191A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A84u;
    // 0x191a88: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x191A84u, 0x191A8Cu)) {
        return;
    }
    ctx->pc = 0x191A8Cu;
label_191a8c:
    // 0x191a8c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_191a90:
    if (ctx->pc == 0x191A90u) {
        ctx->pc = 0x191A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A8Cu;
        // 0x191a90: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191A94u;
        goto label_191a94;
    }
    ctx->pc = 0x191A8Cu;
    {
        const bool branch_taken_0x191a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A8Cu;
        // 0x191a90: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a8c) {
            ctx->pc = 0x191AF8u;
            goto label_191af8;
        }
    }
    ctx->pc = 0x191A94u;
label_191a94:
    // 0x191a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_191a98:
    // 0x191a98: 0xc0808f0  jal         func_2023C0
label_191a9c:
    if (ctx->pc == 0x191A9Cu) {
        ctx->pc = 0x191A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A98u;
        // 0x191a9c: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AA0u;
        goto label_191aa0;
    }
    ctx->pc = 0x191A98u;
    SET_GPR_U32(ctx, 31, 0x191AA0u);
    ctx->pc = 0x191A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191A98u;
    // 0x191a9c: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x191A98u, 0x191AA0u)) {
        return;
    }
    ctx->pc = 0x191AA0u;
label_191aa0:
    // 0x191aa0: 0xc054dce  jal         func_153738
label_191aa4:
    if (ctx->pc == 0x191AA4u) {
        ctx->pc = 0x191AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA0u;
        // 0x191aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AA8u;
        goto label_191aa8;
    }
    ctx->pc = 0x191AA0u;
    SET_GPR_U32(ctx, 31, 0x191AA8u);
    ctx->pc = 0x191AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AA0u;
    // 0x191aa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153738u, 0x191AA0u, 0x191AA8u)) {
        return;
    }
    ctx->pc = 0x191AA8u;
label_191aa8:
    // 0x191aa8: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x191aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_191aac:
    // 0x191aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191ab0:
    // 0x191ab0: 0xae2200f4  sw          $v0, 0xF4($s1)
    ctx->pc = 0x191ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
label_191ab4:
    // 0x191ab4: 0xc054fb4  jal         func_153ED0
label_191ab8:
    if (ctx->pc == 0x191AB8u) {
        ctx->pc = 0x191AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AB4u;
        // 0x191ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191ABCu;
        goto label_191abc;
    }
    ctx->pc = 0x191AB4u;
    SET_GPR_U32(ctx, 31, 0x191ABCu);
    ctx->pc = 0x191AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AB4u;
    // 0x191ab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153ED0u, 0x191AB4u, 0x191ABCu)) {
        return;
    }
    ctx->pc = 0x191ABCu;
label_191abc:
    // 0x191abc: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x191abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_191ac0:
    // 0x191ac0: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x191ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_191ac4:
    // 0x191ac4: 0x24a51f30  addiu       $a1, $a1, 0x1F30
    ctx->pc = 0x191ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7984));
label_191ac8:
    // 0x191ac8: 0xc054fc6  jal         func_153F18
label_191acc:
    if (ctx->pc == 0x191ACCu) {
        ctx->pc = 0x191ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AC8u;
        // 0x191acc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AD0u;
        goto label_191ad0;
    }
    ctx->pc = 0x191AC8u;
    SET_GPR_U32(ctx, 31, 0x191AD0u);
    ctx->pc = 0x191ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AC8u;
    // 0x191acc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153F18u, 0x191AC8u, 0x191AD0u)) {
        return;
    }
    ctx->pc = 0x191AD0u;
label_191ad0:
    // 0x191ad0: 0xc054c42  jal         func_153108
label_191ad4:
    if (ctx->pc == 0x191AD4u) {
        ctx->pc = 0x191AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AD0u;
        // 0x191ad4: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AD8u;
        goto label_191ad8;
    }
    ctx->pc = 0x191AD0u;
    SET_GPR_U32(ctx, 31, 0x191AD8u);
    ctx->pc = 0x191AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AD0u;
    // 0x191ad4: 0x8e2400f4  lw          $a0, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153108u, 0x191AD0u, 0x191AD8u)) {
        return;
    }
    ctx->pc = 0x191AD8u;
label_191ad8:
    // 0x191ad8: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_191adc:
    // 0x191adc: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x191adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_191ae0:
    // 0x191ae0: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x191ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_191ae4:
    // 0x191ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191ae8:
    // 0x191ae8: 0xc07fc98  jal         func_1FF260
label_191aec:
    if (ctx->pc == 0x191AECu) {
        ctx->pc = 0x191AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AE8u;
        // 0x191aec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191AF0u;
        goto label_191af0;
    }
    ctx->pc = 0x191AE8u;
    SET_GPR_U32(ctx, 31, 0x191AF0u);
    ctx->pc = 0x191AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AE8u;
    // 0x191aec: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x191AE8u, 0x191AF0u)) {
        return;
    }
    ctx->pc = 0x191AF0u;
label_191af0:
    // 0x191af0: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x191af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_191af4:
    // 0x191af4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x191af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_191af8:
    // 0x191af8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x191af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_191afc:
    // 0x191afc: 0x8c454488  lw          $a1, 0x4488($v0)
    ctx->pc = 0x191afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17544)));
label_191b00:
    // 0x191b00: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x191b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_191b04:
    // 0x191b04: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_191b08:
    if (ctx->pc == 0x191B08u) {
        ctx->pc = 0x191B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B04u;
        // 0x191b08: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B0Cu;
        goto label_191b0c;
    }
    ctx->pc = 0x191B04u;
    {
        const bool branch_taken_0x191b04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x191B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B04u;
        // 0x191b08: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b04) {
            ctx->pc = 0x191B2Cu;
            goto label_191b2c;
        }
    }
    ctx->pc = 0x191B0Cu;
label_191b0c:
    // 0x191b0c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x191b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_191b10:
    // 0x191b10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_191b14:
    if (ctx->pc == 0x191B14u) {
        ctx->pc = 0x191B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B10u;
        // 0x191b14: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B18u;
        goto label_191b18;
    }
    ctx->pc = 0x191B10u;
    {
        const bool branch_taken_0x191b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B10u;
        // 0x191b14: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b10) {
            ctx->pc = 0x191B2Cu;
            goto label_191b2c;
        }
    }
    ctx->pc = 0x191B18u;
label_191b18:
    // 0x191b18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x191b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_191b1c:
    // 0x191b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_191b20:
    // 0x191b20: 0xc07fd18  jal         func_1FF460
label_191b24:
    if (ctx->pc == 0x191B24u) {
        ctx->pc = 0x191B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B20u;
        // 0x191b24: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B28u;
        goto label_191b28;
    }
    ctx->pc = 0x191B20u;
    SET_GPR_U32(ctx, 31, 0x191B28u);
    ctx->pc = 0x191B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B20u;
    // 0x191b24: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x191B20u, 0x191B28u)) {
        return;
    }
    ctx->pc = 0x191B28u;
label_191b28:
    // 0x191b28: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x191b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_191b2c:
    // 0x191b2c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x191b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_191b30:
    // 0x191b30: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x191b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_191b34:
    // 0x191b34: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x191b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_191b38:
    // 0x191b38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x191b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191b3c:
    // 0x191b3c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x191b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_191b40:
    // 0x191b40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191b44:
    // 0x191b44: 0x3e00008  jr          $ra
label_191b48:
    if (ctx->pc == 0x191B48u) {
        ctx->pc = 0x191B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B44u;
        // 0x191b48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191B4Cu;
        goto label_191b4c;
    }
    ctx->pc = 0x191B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B44u;
        // 0x191b48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191B4Cu;
label_191b4c:
    // 0x191b4c: 0x0  nop
    ctx->pc = 0x191b4cu;
    // NOP
    ctx->pc = 0x191b50u;
}
