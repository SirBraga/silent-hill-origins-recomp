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

// Function: sub_0019A090
// Address: 0x19a090 - 0x19a1f0
void sub_0019A090_0x19a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A090_0x19a090");
#endif

    switch (ctx->pc) {
        case 0x19a0ecu: goto label_19a0ec;
        case 0x19a100u: goto label_19a100;
        case 0x19a10cu: goto label_19a10c;
        case 0x19a118u: goto label_19a118;
        case 0x19a124u: goto label_19a124;
        case 0x19a12cu: goto label_19a12c;
        case 0x19a138u: goto label_19a138;
        case 0x19a140u: goto label_19a140;
        case 0x19a14cu: goto label_19a14c;
        case 0x19a154u: goto label_19a154;
        case 0x19a160u: goto label_19a160;
        case 0x19a168u: goto label_19a168;
        case 0x19a174u: goto label_19a174;
        case 0x19a180u: goto label_19a180;
        case 0x19a18cu: goto label_19a18c;
        case 0x19a198u: goto label_19a198;
        case 0x19a1a4u: goto label_19a1a4;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a1c4u: goto label_19a1c4;
        default: break;
    }

    ctx->pc = 0x19a090u;

    // 0x19a090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x19a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x19a094: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19a094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19a098: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x19a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x19a09c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19a0a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19a0a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0a4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x19a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x19a0a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x19a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x19a0ac: 0x24429ef0  addiu       $v0, $v0, -0x6110
    ctx->pc = 0x19a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942448));
    // 0x19a0b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x19a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x19a0b4: 0x24639f10  addiu       $v1, $v1, -0x60F0
    ctx->pc = 0x19a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942480));
    // 0x19a0b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19a0bc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a0c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x19a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x19a0c4: 0x24848110  addiu       $a0, $a0, -0x7EF0
    ctx->pc = 0x19a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934800));
    // 0x19a0c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x19a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x19a0cc: 0x26d10038  addiu       $s1, $s6, 0x38
    ctx->pc = 0x19a0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 56));
    // 0x19a0d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a0d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19a0d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a0d8: 0xaec2003c  sw          $v0, 0x3C($s6)
    ctx->pc = 0x19a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 2));
    // 0x19a0dc: 0x26d40048  addiu       $s4, $s6, 0x48
    ctx->pc = 0x19a0dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 72));
    // 0x19a0e0: 0xaec30034  sw          $v1, 0x34($s6)
    ctx->pc = 0x19a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 52), GPR_U32(ctx, 3));
    // 0x19a0e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A0E4u;
    SET_GPR_U32(ctx, 31, 0x19A0ECu);
    ctx->pc = 0x19A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0E4u;
    // 0x19a0e8: 0x26d30050  addiu       $s3, $s6, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A0E4u, 0x19A0ECu)) {
        return;
    }
    ctx->pc = 0x19A0ECu;
label_19a0ec:
    // 0x19a0ec: 0x26d20058  addiu       $s2, $s6, 0x58
    ctx->pc = 0x19a0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
    // 0x19a0f0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a0f4: 0x26d00060  addiu       $s0, $s6, 0x60
    ctx->pc = 0x19a0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x19a0f8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A0F8u;
    SET_GPR_U32(ctx, 31, 0x19A100u);
    ctx->pc = 0x19A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0F8u;
    // 0x19a0fc: 0x24848118  addiu       $a0, $a0, -0x7EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A0F8u, 0x19A100u)) {
        return;
    }
    ctx->pc = 0x19A100u;
label_19a100:
    // 0x19a100: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a104: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A104u;
    SET_GPR_U32(ctx, 31, 0x19A10Cu);
    ctx->pc = 0x19A108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A104u;
    // 0x19a108: 0x24848120  addiu       $a0, $a0, -0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A104u, 0x19A10Cu)) {
        return;
    }
    ctx->pc = 0x19A10Cu;
label_19a10c:
    // 0x19a10c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19a110: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A110u;
    SET_GPR_U32(ctx, 31, 0x19A118u);
    ctx->pc = 0x19A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A110u;
    // 0x19a114: 0x24848128  addiu       $a0, $a0, -0x7ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A110u, 0x19A118u)) {
        return;
    }
    ctx->pc = 0x19A118u;
label_19a118:
    // 0x19a118: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a11c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A11Cu;
    SET_GPR_U32(ctx, 31, 0x19A124u);
    ctx->pc = 0x19A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A11Cu;
    // 0x19a120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A11Cu, 0x19A124u)) {
        return;
    }
    ctx->pc = 0x19A124u;
label_19a124:
    // 0x19a124: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A124u;
    SET_GPR_U32(ctx, 31, 0x19A12Cu);
    ctx->pc = 0x19A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A124u;
    // 0x19a128: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A124u, 0x19A12Cu)) {
        return;
    }
    ctx->pc = 0x19A12Cu;
label_19a12c:
    // 0x19a12c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a130: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A130u;
    SET_GPR_U32(ctx, 31, 0x19A138u);
    ctx->pc = 0x19A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A130u;
    // 0x19a134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A130u, 0x19A138u)) {
        return;
    }
    ctx->pc = 0x19A138u;
label_19a138:
    // 0x19a138: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A138u;
    SET_GPR_U32(ctx, 31, 0x19A140u);
    ctx->pc = 0x19A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A138u;
    // 0x19a13c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A138u, 0x19A140u)) {
        return;
    }
    ctx->pc = 0x19A140u;
label_19a140:
    // 0x19a140: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a144: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A144u;
    SET_GPR_U32(ctx, 31, 0x19A14Cu);
    ctx->pc = 0x19A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A144u;
    // 0x19a148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A144u, 0x19A14Cu)) {
        return;
    }
    ctx->pc = 0x19A14Cu;
label_19a14c:
    // 0x19a14c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A14Cu;
    SET_GPR_U32(ctx, 31, 0x19A154u);
    ctx->pc = 0x19A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A14Cu;
    // 0x19a150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A14Cu, 0x19A154u)) {
        return;
    }
    ctx->pc = 0x19A154u;
label_19a154:
    // 0x19a154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19a154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a158: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A158u;
    SET_GPR_U32(ctx, 31, 0x19A160u);
    ctx->pc = 0x19A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A158u;
    // 0x19a15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A158u, 0x19A160u)) {
        return;
    }
    ctx->pc = 0x19A160u;
label_19a160:
    // 0x19a160: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A160u;
    SET_GPR_U32(ctx, 31, 0x19A168u);
    ctx->pc = 0x19A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A160u;
    // 0x19a164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A160u, 0x19A168u)) {
        return;
    }
    ctx->pc = 0x19A168u;
label_19a168:
    // 0x19a168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a16c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A16Cu;
    SET_GPR_U32(ctx, 31, 0x19A174u);
    ctx->pc = 0x19A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A16Cu;
    // 0x19a170: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A16Cu, 0x19A174u)) {
        return;
    }
    ctx->pc = 0x19A174u;
label_19a174:
    // 0x19a174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a178: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A178u;
    SET_GPR_U32(ctx, 31, 0x19A180u);
    ctx->pc = 0x19A17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A178u;
    // 0x19a17c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A178u, 0x19A180u)) {
        return;
    }
    ctx->pc = 0x19A180u;
label_19a180:
    // 0x19a180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19a180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a184: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A184u;
    SET_GPR_U32(ctx, 31, 0x19A18Cu);
    ctx->pc = 0x19A188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A184u;
    // 0x19a188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A184u, 0x19A18Cu)) {
        return;
    }
    ctx->pc = 0x19A18Cu;
label_19a18c:
    // 0x19a18c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a190: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A190u;
    SET_GPR_U32(ctx, 31, 0x19A198u);
    ctx->pc = 0x19A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A190u;
    // 0x19a194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A190u, 0x19A198u)) {
        return;
    }
    ctx->pc = 0x19A198u;
label_19a198:
    // 0x19a198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a19c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x19A19Cu;
    SET_GPR_U32(ctx, 31, 0x19A1A4u);
    ctx->pc = 0x19A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A19Cu;
    // 0x19a1a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x19A19Cu, 0x19A1A4u)) {
        return;
    }
    ctx->pc = 0x19A1A4u;
label_19a1a4:
    // 0x19a1a4: 0x26c40004  addiu       $a0, $s6, 0x4
    ctx->pc = 0x19a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x19a1a8: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x19A1A8u;
    SET_GPR_U32(ctx, 31, 0x19A1B0u);
    ctx->pc = 0x19A1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1A8u;
    // 0x19a1ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x19A1A8u, 0x19A1B0u)) {
        return;
    }
    ctx->pc = 0x19A1B0u;
label_19a1b0:
    // 0x19a1b0: 0x32b50001  andi        $s5, $s5, 0x1
    ctx->pc = 0x19a1b0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x19a1b4: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A1B4u;
    {
        const bool branch_taken_0x19a1b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1B4u;
        // 0x19a1b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1b4) {
            ctx->pc = 0x19A1C8u;
            goto label_19a1c8;
        }
    }
    ctx->pc = 0x19A1BCu;
    // 0x19a1bc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19A1BCu;
    SET_GPR_U32(ctx, 31, 0x19A1C4u);
    ctx->pc = 0x19A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A1BCu;
    // 0x19a1c0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19A1BCu, 0x19A1C4u)) {
        return;
    }
    ctx->pc = 0x19A1C4u;
label_19a1c4:
    // 0x19a1c4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x19a1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19a1c8:
    // 0x19a1c8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x19a1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a1cc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x19a1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a1d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19a1d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a1d4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x19a1d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a1d8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x19a1d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a1dc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x19a1dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a1e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x19A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E4u;
        // 0x19a1e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A1ECu;
    // 0x19a1ec: 0x0  nop
    ctx->pc = 0x19a1ecu;
    // NOP
    ctx->pc = 0x19a1f0u;
}
