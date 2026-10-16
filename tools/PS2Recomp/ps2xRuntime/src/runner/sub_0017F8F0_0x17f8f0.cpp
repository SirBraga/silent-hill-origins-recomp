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

// Function: sub_0017F8F0
// Address: 0x17f8f0 - 0x17fba8
void sub_0017F8F0_0x17f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F8F0_0x17f8f0");
#endif

    switch (ctx->pc) {
        case 0x17f928u: goto label_17f928;
        case 0x17f95cu: goto label_17f95c;
        case 0x17f970u: goto label_17f970;
        case 0x17f984u: goto label_17f984;
        case 0x17f998u: goto label_17f998;
        case 0x17f9b8u: goto label_17f9b8;
        case 0x17f9dcu: goto label_17f9dc;
        case 0x17f9f8u: goto label_17f9f8;
        case 0x17fa14u: goto label_17fa14;
        case 0x17fa30u: goto label_17fa30;
        case 0x17fa4cu: goto label_17fa4c;
        case 0x17fa68u: goto label_17fa68;
        case 0x17fa80u: goto label_17fa80;
        case 0x17fa98u: goto label_17fa98;
        case 0x17faacu: goto label_17faac;
        case 0x17fac0u: goto label_17fac0;
        case 0x17fad4u: goto label_17fad4;
        case 0x17fae8u: goto label_17fae8;
        case 0x17fafcu: goto label_17fafc;
        case 0x17fb10u: goto label_17fb10;
        case 0x17fb2cu: goto label_17fb2c;
        case 0x17fb48u: goto label_17fb48;
        case 0x17fb5cu: goto label_17fb5c;
        case 0x17fb70u: goto label_17fb70;
        default: break;
    }

    ctx->pc = 0x17f8f0u;

    // 0x17f8f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17f8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17f8f4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x17f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x17f8f8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x17f8f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f8fc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x17f900: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x17f904: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x17f908: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x17f908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x17f90c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17f90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17f910: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x17f910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x17f914: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x17f914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x17f918: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x17f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x17f91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f920: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x17F920u;
    SET_GPR_U32(ctx, 31, 0x17F928u);
    ctx->pc = 0x17F924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F920u;
    // 0x17f924: 0x27d30038  addiu       $s3, $fp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x17F920u, 0x17F928u)) {
        return;
    }
    ctx->pc = 0x17F928u;
label_17f928:
    // 0x17f928: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17f928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17f92c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17f930: 0x24637d58  addiu       $v1, $v1, 0x7D58
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32088));
    // 0x17f934: 0x24427d78  addiu       $v0, $v0, 0x7D78
    ctx->pc = 0x17f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32120));
    // 0x17f938: 0xafc3003c  sw          $v1, 0x3C($fp)
    ctx->pc = 0x17f938u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 60), GPR_U32(ctx, 3));
    // 0x17f93c: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x17f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x17f940: 0xafc20034  sw          $v0, 0x34($fp)
    ctx->pc = 0x17f940u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 52), GPR_U32(ctx, 2));
    // 0x17f944: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17f944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17f948: 0xacbe89f4  sw          $fp, -0x760C($a1)
    ctx->pc = 0x17f948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x3389F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3389F4u, _value); } while (0);
    // 0x17f94c: 0x24844fc8  addiu       $a0, $a0, 0x4FC8
    ctx->pc = 0x17f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20424));
    // 0x17f950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f954: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17F954u;
    SET_GPR_U32(ctx, 31, 0x17F95Cu);
    ctx->pc = 0x17F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F954u;
    // 0x17f958: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17F954u, 0x17F95Cu)) {
        return;
    }
    ctx->pc = 0x17F95Cu;
label_17f95c:
    // 0x17f95c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17f960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f964: 0x24845048  addiu       $a0, $a0, 0x5048
    ctx->pc = 0x17f964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20552));
    // 0x17f968: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17F968u;
    SET_GPR_U32(ctx, 31, 0x17F970u);
    ctx->pc = 0x17F96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F968u;
    // 0x17f96c: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17F968u, 0x17F970u)) {
        return;
    }
    ctx->pc = 0x17F970u;
label_17f970:
    // 0x17f970: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x17f970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x17f974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f978: 0x24844128  addiu       $a0, $a0, 0x4128
    ctx->pc = 0x17f978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16680));
    // 0x17f97c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17F97Cu;
    SET_GPR_U32(ctx, 31, 0x17F984u);
    ctx->pc = 0x17F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F97Cu;
    // 0x17f980: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17F97Cu, 0x17F984u)) {
        return;
    }
    ctx->pc = 0x17F984u;
label_17f984:
    // 0x17f984: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x17f984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x17f988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f98c: 0x24845080  addiu       $a0, $a0, 0x5080
    ctx->pc = 0x17f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20608));
    // 0x17f990: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x17F990u;
    SET_GPR_U32(ctx, 31, 0x17F998u);
    ctx->pc = 0x17F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F990u;
    // 0x17f994: 0x24060038  addiu       $a2, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x17F990u, 0x17F998u)) {
        return;
    }
    ctx->pc = 0x17F998u;
label_17f998:
    // 0x17f998: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17f99c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f9a0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x17f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x17f9a4: 0xac6089f0  sw          $zero, -0x7610($v1)
    ctx->pc = 0x17f9a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3389F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3389F0u, _value); } while (0);
    // 0x17f9a8: 0xac4089e8  sw          $zero, -0x7618($v0)
    ctx->pc = 0x17f9a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3389E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3389E8u, _value); } while (0);
    // 0x17f9ac: 0xac8089ec  sw          $zero, -0x7614($a0)
    ctx->pc = 0x17f9acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3389ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3389ECu, _value); } while (0);
    // 0x17f9b0: 0xc05f916  jal         func_17E458
    ctx->pc = 0x17F9B0u;
    SET_GPR_U32(ctx, 31, 0x17F9B8u);
    ctx->pc = 0x17F9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9B0u;
    // 0x17f9b4: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E458u, 0x17F9B0u, 0x17F9B8u)) {
        return;
    }
    ctx->pc = 0x17F9B8u;
label_17f9b8:
    // 0x17f9b8: 0x3c17006c  lui         $s7, 0x6C
    ctx->pc = 0x17f9b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)108 << 16));
    // 0x17f9bc: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x17f9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x17f9c0: 0x26527c68  addiu       $s2, $s2, 0x7C68
    ctx->pc = 0x17f9c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 31848));
    // 0x17f9c4: 0x26f7f9e8  addiu       $s7, $s7, -0x618
    ctx->pc = 0x17f9c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965736));
    // 0x17f9c8: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17f9cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9d0: 0x24a57c50  addiu       $a1, $a1, 0x7C50
    ctx->pc = 0x17f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
    // 0x17f9d4: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17F9D4u;
    SET_GPR_U32(ctx, 31, 0x17F9DCu);
    ctx->pc = 0x17F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9D4u;
    // 0x17f9d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17F9D4u, 0x17F9DCu)) {
        return;
    }
    ctx->pc = 0x17F9DCu;
label_17f9dc:
    // 0x17f9dc: 0x3c16006c  lui         $s6, 0x6C
    ctx->pc = 0x17f9dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    // 0x17f9e0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17f9e4: 0x26d6f9f0  addiu       $s6, $s6, -0x610
    ctx->pc = 0x17f9e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965744));
    // 0x17f9e8: 0x24a57c70  addiu       $a1, $a1, 0x7C70
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31856));
    // 0x17f9ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17f9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9f0: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17F9F0u;
    SET_GPR_U32(ctx, 31, 0x17F9F8u);
    ctx->pc = 0x17F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F9F0u;
    // 0x17f9f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17F9F0u, 0x17F9F8u)) {
        return;
    }
    ctx->pc = 0x17F9F8u;
label_17f9f8:
    // 0x17f9f8: 0x3c15006c  lui         $s5, 0x6C
    ctx->pc = 0x17f9f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    // 0x17f9fc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17f9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17fa00: 0x26b5f9f8  addiu       $s5, $s5, -0x608
    ctx->pc = 0x17fa00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965752));
    // 0x17fa04: 0x24a57c88  addiu       $a1, $a1, 0x7C88
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31880));
    // 0x17fa08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17fa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa0c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17FA0Cu;
    SET_GPR_U32(ctx, 31, 0x17FA14u);
    ctx->pc = 0x17FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA0Cu;
    // 0x17fa10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17FA0Cu, 0x17FA14u)) {
        return;
    }
    ctx->pc = 0x17FA14u;
label_17fa14:
    // 0x17fa14: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x17fa14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x17fa18: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17fa1c: 0x2694fa00  addiu       $s4, $s4, -0x600
    ctx->pc = 0x17fa1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965760));
    // 0x17fa20: 0x24a57ca0  addiu       $a1, $a1, 0x7CA0
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31904));
    // 0x17fa24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa28: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17FA28u;
    SET_GPR_U32(ctx, 31, 0x17FA30u);
    ctx->pc = 0x17FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA28u;
    // 0x17fa2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17FA28u, 0x17FA30u)) {
        return;
    }
    ctx->pc = 0x17FA30u;
label_17fa30:
    // 0x17fa30: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x17fa30u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x17fa34: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17fa34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17fa38: 0x2631fa08  addiu       $s1, $s1, -0x5F8
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965768));
    // 0x17fa3c: 0x24a57cb8  addiu       $a1, $a1, 0x7CB8
    ctx->pc = 0x17fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31928));
    // 0x17fa40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa44: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17FA44u;
    SET_GPR_U32(ctx, 31, 0x17FA4Cu);
    ctx->pc = 0x17FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA44u;
    // 0x17fa48: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17FA44u, 0x17FA4Cu)) {
        return;
    }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x17fa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x17fa50: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17fa54: 0x2610fa10  addiu       $s0, $s0, -0x5F0
    ctx->pc = 0x17fa54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965776));
    // 0x17fa58: 0x24a57cd0  addiu       $a1, $a1, 0x7CD0
    ctx->pc = 0x17fa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31952));
    // 0x17fa5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa60: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17FA60u;
    SET_GPR_U32(ctx, 31, 0x17FA68u);
    ctx->pc = 0x17FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA60u;
    // 0x17fa64: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17FA60u, 0x17FA68u)) {
        return;
    }
    ctx->pc = 0x17FA68u;
label_17fa68:
    // 0x17fa68: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x17fa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x17fa6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa70: 0x24a586c8  addiu       $a1, $a1, -0x7938
    ctx->pc = 0x17fa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    // 0x17fa74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fa74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa78: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FA78u;
    SET_GPR_U32(ctx, 31, 0x17FA80u);
    ctx->pc = 0x17FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA78u;
    // 0x17fa7c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FA78u, 0x17FA80u)) {
        return;
    }
    ctx->pc = 0x17FA80u;
label_17fa80:
    // 0x17fa80: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x17fa80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x17fa84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa88: 0x24a586d0  addiu       $a1, $a1, -0x7930
    ctx->pc = 0x17fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    // 0x17fa8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fa8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa90: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FA90u;
    SET_GPR_U32(ctx, 31, 0x17FA98u);
    ctx->pc = 0x17FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA90u;
    // 0x17fa94: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FA90u, 0x17FA98u)) {
        return;
    }
    ctx->pc = 0x17FA98u;
label_17fa98:
    // 0x17fa98: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x17fa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fa9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17faa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faa4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FAA4u;
    SET_GPR_U32(ctx, 31, 0x17FAACu);
    ctx->pc = 0x17FAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAA4u;
    // 0x17faa8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FAA4u, 0x17FAACu)) {
        return;
    }
    ctx->pc = 0x17FAACu;
label_17faac:
    // 0x17faac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17faacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fab8: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FAB8u;
    SET_GPR_U32(ctx, 31, 0x17FAC0u);
    ctx->pc = 0x17FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAB8u;
    // 0x17fabc: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FAB8u, 0x17FAC0u)) {
        return;
    }
    ctx->pc = 0x17FAC0u;
label_17fac0:
    // 0x17fac0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x17fac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fac8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17facc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FACCu;
    SET_GPR_U32(ctx, 31, 0x17FAD4u);
    ctx->pc = 0x17FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FACCu;
    // 0x17fad0: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FACCu, 0x17FAD4u)) {
        return;
    }
    ctx->pc = 0x17FAD4u;
label_17fad4:
    // 0x17fad4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17fad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fad8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fadc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fae0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FAE0u;
    SET_GPR_U32(ctx, 31, 0x17FAE8u);
    ctx->pc = 0x17FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAE0u;
    // 0x17fae4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FAE0u, 0x17FAE8u)) {
        return;
    }
    ctx->pc = 0x17FAE8u;
label_17fae8:
    // 0x17fae8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17faecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17faf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17faf4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FAF4u;
    SET_GPR_U32(ctx, 31, 0x17FAFCu);
    ctx->pc = 0x17FAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FAF4u;
    // 0x17faf8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FAF4u, 0x17FAFCu)) {
        return;
    }
    ctx->pc = 0x17FAFCu;
label_17fafc:
    // 0x17fafc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb00: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x17fb00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17fb04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb08: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FB08u;
    SET_GPR_U32(ctx, 31, 0x17FB10u);
    ctx->pc = 0x17FB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB08u;
    // 0x17fb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FB08u, 0x17FB10u)) {
        return;
    }
    ctx->pc = 0x17FB10u;
label_17fb10:
    // 0x17fb10: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x17fb10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x17fb14: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17fb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17fb18: 0x2631fa18  addiu       $s1, $s1, -0x5E8
    ctx->pc = 0x17fb18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965784));
    // 0x17fb1c: 0x24a57ce8  addiu       $a1, $a1, 0x7CE8
    ctx->pc = 0x17fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31976));
    // 0x17fb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17fb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb24: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17FB24u;
    SET_GPR_U32(ctx, 31, 0x17FB2Cu);
    ctx->pc = 0x17FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB24u;
    // 0x17fb28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17FB24u, 0x17FB2Cu)) {
        return;
    }
    ctx->pc = 0x17FB2Cu;
label_17fb2c:
    // 0x17fb2c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x17fb2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x17fb30: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x17fb30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x17fb34: 0x2610fa20  addiu       $s0, $s0, -0x5E0
    ctx->pc = 0x17fb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965792));
    // 0x17fb38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17fb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17fb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb40: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x17FB40u;
    SET_GPR_U32(ctx, 31, 0x17FB48u);
    ctx->pc = 0x17FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB40u;
    // 0x17fb44: 0x24a57d00  addiu       $a1, $a1, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x17FB40u, 0x17FB48u)) {
        return;
    }
    ctx->pc = 0x17FB48u;
label_17fb48:
    // 0x17fb48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17fb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fb50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb54: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FB54u;
    SET_GPR_U32(ctx, 31, 0x17FB5Cu);
    ctx->pc = 0x17FB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB54u;
    // 0x17fb58: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FB54u, 0x17FB5Cu)) {
        return;
    }
    ctx->pc = 0x17FB5Cu;
label_17fb5c:
    // 0x17fb5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17fb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17fb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb68: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x17FB68u;
    SET_GPR_U32(ctx, 31, 0x17FB70u);
    ctx->pc = 0x17FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FB68u;
    // 0x17fb6c: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x17FB68u, 0x17FB70u)) {
        return;
    }
    ctx->pc = 0x17FB70u;
label_17fb70:
    // 0x17fb70: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x17fb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fb74: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x17fb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17fb78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17fb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17fb7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x17fb7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17fb80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x17fb80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fb84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17fb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fb88: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x17fb88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fb8c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x17fb8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fb90: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x17fb90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fb94: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x17fb94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FB9Cu;
        // 0x17fba0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FBA4u;
    // 0x17fba4: 0x0  nop
    ctx->pc = 0x17fba4u;
    // NOP
    ctx->pc = 0x17fba8u;
}
