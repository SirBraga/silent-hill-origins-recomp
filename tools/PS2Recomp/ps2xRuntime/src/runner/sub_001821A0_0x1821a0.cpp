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

// Function: sub_001821A0
// Address: 0x1821a0 - 0x182468
void sub_001821A0_0x1821a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001821A0_0x1821a0");
#endif

    switch (ctx->pc) {
        case 0x1821dcu: goto label_1821dc;
        case 0x1821f4u: goto label_1821f4;
        case 0x182224u: goto label_182224;
        case 0x18224cu: goto label_18224c;
        case 0x182274u: goto label_182274;
        case 0x18228cu: goto label_18228c;
        case 0x18229cu: goto label_18229c;
        case 0x1822b4u: goto label_1822b4;
        case 0x1822c4u: goto label_1822c4;
        case 0x1822ecu: goto label_1822ec;
        case 0x182310u: goto label_182310;
        case 0x182330u: goto label_182330;
        case 0x18234cu: goto label_18234c;
        case 0x182364u: goto label_182364;
        case 0x18237cu: goto label_18237c;
        case 0x182394u: goto label_182394;
        case 0x1823e8u: goto label_1823e8;
        case 0x1823f8u: goto label_1823f8;
        case 0x182404u: goto label_182404;
        case 0x182420u: goto label_182420;
        default: break;
    }

    ctx->pc = 0x1821a0u;

    // 0x1821a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1821a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1821a4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1821a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1821a8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1821a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821ac: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1821acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1821b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1821b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1821b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1821b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1821b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1821bc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1821bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1821c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1821c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1821c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1821c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1821c8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1821c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1821cc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1821ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1821d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1821d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1821d4: 0xc060aec  jal         func_182BB0
    ctx->pc = 0x1821D4u;
    SET_GPR_U32(ctx, 31, 0x1821DCu);
    ctx->pc = 0x1821D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821D4u;
    // 0x1821d8: 0x3c170034  lui         $s7, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182BB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182BB0u, 0x1821D4u, 0x1821DCu)) {
        return;
    }
    ctx->pc = 0x1821DCu;
label_1821dc:
    // 0x1821dc: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1821DCu;
    {
        const bool branch_taken_0x1821dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1821E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1821DCu;
        // 0x1821e0: 0x3c05000f  lui         $a1, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1821dc) {
            ctx->pc = 0x182430u;
            goto label_182430;
        }
    }
    ctx->pc = 0x1821E4u;
    // 0x1821e4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1821e8: 0x34a5e800  ori         $a1, $a1, 0xE800
    ctx->pc = 0x1821e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59392);
    // 0x1821ec: 0xc0c545a  jal         func_315168
    ctx->pc = 0x1821ECu;
    SET_GPR_U32(ctx, 31, 0x1821F4u);
    ctx->pc = 0x1821F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1821ECu;
    // 0x1821f0: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x1821ECu, 0x1821F4u)) {
        return;
    }
    ctx->pc = 0x1821F4u;
label_1821f4:
    // 0x1821f4: 0x3c11000e  lui         $s1, 0xE
    ctx->pc = 0x1821f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)14 << 16));
    // 0x1821f8: 0x8e068a14  lw          $a2, -0x75EC($s0)
    ctx->pc = 0x1821f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937108)));
    // 0x1821fc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x1821fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x182200: 0x3463e800  ori         $v1, $v1, 0xE800
    ctx->pc = 0x182200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)59392);
    // 0x182204: 0x3c05000e  lui         $a1, 0xE
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14 << 16));
    // 0x182208: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18220c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x182210: 0xae068a14  sw          $a2, -0x75EC($s0)
    ctx->pc = 0x182210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937108), GPR_U32(ctx, 6));
    // 0x182214: 0x3c120003  lui         $s2, 0x3
    ctx->pc = 0x182214u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
    // 0x182218: 0xaee289fc  sw          $v0, -0x7604($s7)
    ctx->pc = 0x182218u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294937084), GPR_U32(ctx, 2));
    // 0x18221c: 0xc0c545a  jal         func_315168
    ctx->pc = 0x18221Cu;
    SET_GPR_U32(ctx, 31, 0x182224u);
    ctx->pc = 0x182220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18221Cu;
    // 0x182220: 0x3c16006c  lui         $s6, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x18221Cu, 0x182224u)) {
        return;
    }
    ctx->pc = 0x182224u;
label_182224:
    // 0x182224: 0x3413c000  ori         $s3, $zero, 0xC000
    ctx->pc = 0x182224u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x182228: 0x8e038a14  lw          $v1, -0x75EC($s0)
    ctx->pc = 0x182228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937108)));
    // 0x18222c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x182230: 0xaca2faa0  sw          $v0, -0x560($a1)
    ctx->pc = 0x182230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BFAA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFAA0u, _value); } while (0);
    // 0x182234: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x182234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x182238: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x182238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x18223c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x18223cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x182240: 0xae038a14  sw          $v1, -0x75EC($s0)
    ctx->pc = 0x182240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937108), GPR_U32(ctx, 3));
    // 0x182244: 0xc0c545a  jal         func_315168
    ctx->pc = 0x182244u;
    SET_GPR_U32(ctx, 31, 0x18224Cu);
    ctx->pc = 0x182248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182244u;
    // 0x182248: 0x3c15006c  lui         $s5, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x182244u, 0x18224Cu)) {
        return;
    }
    ctx->pc = 0x18224Cu;
label_18224c:
    // 0x18224c: 0x3c14006c  lui         $s4, 0x6C
    ctx->pc = 0x18224cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)108 << 16));
    // 0x182250: 0x8e038a14  lw          $v1, -0x75EC($s0)
    ctx->pc = 0x182250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937108)));
    // 0x182254: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x182254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x182258: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18225c: 0xaec2fa80  sw          $v0, -0x580($s6)
    ctx->pc = 0x18225cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294965888), GPR_U32(ctx, 2));
    // 0x182260: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x182264: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x182264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x182268: 0xae038a14  sw          $v1, -0x75EC($s0)
    ctx->pc = 0x182268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937108), GPR_U32(ctx, 3));
    // 0x18226c: 0xc0c545a  jal         func_315168
    ctx->pc = 0x18226Cu;
    SET_GPR_U32(ctx, 31, 0x182274u);
    ctx->pc = 0x182270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18226Cu;
    // 0x182270: 0x3c12006c  lui         $s2, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x18226Cu, 0x182274u)) {
        return;
    }
    ctx->pc = 0x182274u;
label_182274:
    // 0x182274: 0x8e038a14  lw          $v1, -0x75EC($s0)
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937108)));
    // 0x182278: 0x24046000  addiu       $a0, $zero, 0x6000
    ctx->pc = 0x182278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x18227c: 0xaea2fa94  sw          $v0, -0x56C($s5)
    ctx->pc = 0x18227cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965908), GPR_U32(ctx, 2));
    // 0x182280: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x182284: 0xc0c99ac  jal         func_3266B0
    ctx->pc = 0x182284u;
    SET_GPR_U32(ctx, 31, 0x18228Cu);
    ctx->pc = 0x182288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182284u;
    // 0x182288: 0xae038a14  sw          $v1, -0x75EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3266B0u, 0x182284u, 0x18228Cu)) {
        return;
    }
    ctx->pc = 0x18228Cu;
label_18228c:
    // 0x18228c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x18228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x182290: 0xae82fa90  sw          $v0, -0x570($s4)
    ctx->pc = 0x182290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294965904), GPR_U32(ctx, 2));
    // 0x182294: 0xc0c545a  jal         func_315168
    ctx->pc = 0x182294u;
    SET_GPR_U32(ctx, 31, 0x18229Cu);
    ctx->pc = 0x182298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182294u;
    // 0x182298: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x182294u, 0x18229Cu)) {
        return;
    }
    ctx->pc = 0x18229Cu;
label_18229c:
    // 0x18229c: 0x8e038a14  lw          $v1, -0x75EC($s0)
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937108)));
    // 0x1822a0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1822a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1822a4: 0xae42fa98  sw          $v0, -0x568($s2)
    ctx->pc = 0x1822a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965912), GPR_U32(ctx, 2));
    // 0x1822a8: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x1822a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x1822ac: 0xc0c99ac  jal         func_3266B0
    ctx->pc = 0x1822ACu;
    SET_GPR_U32(ctx, 31, 0x1822B4u);
    ctx->pc = 0x1822B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822ACu;
    // 0x1822b0: 0xae038a14  sw          $v1, -0x75EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3266B0u, 0x1822ACu, 0x1822B4u)) {
        return;
    }
    ctx->pc = 0x1822B4u;
label_1822b4:
    // 0x1822b4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1822b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1822b8: 0xae22fa9c  sw          $v0, -0x564($s1)
    ctx->pc = 0x1822b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965916), GPR_U32(ctx, 2));
    // 0x1822bc: 0xc0be5ee  jal         func_2F97B8
    ctx->pc = 0x1822BCu;
    SET_GPR_U32(ctx, 31, 0x1822C4u);
    ctx->pc = 0x1822C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822BCu;
    // 0x1822c0: 0xac608a0c  sw          $zero, -0x75F4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937100), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F97B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F97B8u, 0x1822BCu, 0x1822C4u)) {
        return;
    }
    ctx->pc = 0x1822C4u;
label_1822c4:
    // 0x1822c4: 0x8e49fa98  lw          $t1, -0x568($s2)
    ctx->pc = 0x1822c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294965912)));
    // 0x1822c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1822c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1822cc: 0x8e2afa9c  lw          $t2, -0x564($s1)
    ctx->pc = 0x1822ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965916)));
    // 0x1822d0: 0x240b0800  addiu       $t3, $zero, 0x800
    ctx->pc = 0x1822d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1822d4: 0x8e87fa90  lw          $a3, -0x570($s4)
    ctx->pc = 0x1822d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294965904)));
    // 0x1822d8: 0x24086000  addiu       $t0, $zero, 0x6000
    ctx->pc = 0x1822d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x1822dc: 0x8ea5fa94  lw          $a1, -0x56C($s5)
    ctx->pc = 0x1822dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965908)));
    // 0x1822e0: 0x2484faf8  addiu       $a0, $a0, -0x508
    ctx->pc = 0x1822e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966008));
    // 0x1822e4: 0xc0604c8  jal         func_181320
    ctx->pc = 0x1822E4u;
    SET_GPR_U32(ctx, 31, 0x1822ECu);
    ctx->pc = 0x1822E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1822E4u;
    // 0x1822e8: 0x3406c000  ori         $a2, $zero, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181320u, 0x1822E4u, 0x1822ECu)) {
        return;
    }
    ctx->pc = 0x1822ECu;
label_1822ec:
    // 0x1822ec: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1822ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x1822f0: 0x8ee589fc  lw          $a1, -0x7604($s7)
    ctx->pc = 0x1822f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937084)));
    // 0x1822f4: 0x2610faa8  addiu       $s0, $s0, -0x558
    ctx->pc = 0x1822f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965928));
    // 0x1822f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1822f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1822fc: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x1822fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x182300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182304: 0x34c6e800  ori         $a2, $a2, 0xE800
    ctx->pc = 0x182304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)59392);
    // 0x182308: 0xc0be344  jal         func_2F8D10
    ctx->pc = 0x182308u;
    SET_GPR_U32(ctx, 31, 0x182310u);
    ctx->pc = 0x18230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182308u;
    // 0x18230c: 0xac40faf0  sw          $zero, -0x510($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8D10u, 0x182308u, 0x182310u)) {
        return;
    }
    ctx->pc = 0x182310u;
label_182310:
    // 0x182310: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x182310u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182314: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x182314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
    // 0x182318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18231c: 0x24e71ea8  addiu       $a3, $a3, 0x1EA8
    ctx->pc = 0x18231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7848));
    // 0x182320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182328: 0xc0bf6b2  jal         func_2FDAC8
    ctx->pc = 0x182328u;
    SET_GPR_U32(ctx, 31, 0x182330u);
    ctx->pc = 0x18232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182328u;
    // 0x18232c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAC8u, 0x182328u, 0x182330u)) {
        return;
    }
    ctx->pc = 0x182330u;
label_182330:
    // 0x182330: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x182330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
    // 0x182334: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x182334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18233c: 0x24e72990  addiu       $a3, $a3, 0x2990
    ctx->pc = 0x18233cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10640));
    // 0x182340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182344: 0xc0bf6b2  jal         func_2FDAC8
    ctx->pc = 0x182344u;
    SET_GPR_U32(ctx, 31, 0x18234Cu);
    ctx->pc = 0x182348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182344u;
    // 0x182348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAC8u, 0x182344u, 0x18234Cu)) {
        return;
    }
    ctx->pc = 0x18234Cu;
label_18234c:
    // 0x18234c: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x18234cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x182350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182354: 0x24c61fe0  addiu       $a2, $a2, 0x1FE0
    ctx->pc = 0x182354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8160));
    // 0x182358: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x182358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18235c: 0xc0be658  jal         func_2F9960
    ctx->pc = 0x18235Cu;
    SET_GPR_U32(ctx, 31, 0x182364u);
    ctx->pc = 0x182360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18235Cu;
    // 0x182360: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9960u, 0x18235Cu, 0x182364u)) {
        return;
    }
    ctx->pc = 0x182364u;
label_182364:
    // 0x182364: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x182364u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x182368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18236c: 0x24c62a68  addiu       $a2, $a2, 0x2A68
    ctx->pc = 0x18236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10856));
    // 0x182370: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x182370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x182374: 0xc0be658  jal         func_2F9960
    ctx->pc = 0x182374u;
    SET_GPR_U32(ctx, 31, 0x18237Cu);
    ctx->pc = 0x182378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182374u;
    // 0x182378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9960u, 0x182374u, 0x18237Cu)) {
        return;
    }
    ctx->pc = 0x18237Cu;
label_18237c:
    // 0x18237c: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x18237cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x182380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182384: 0x24c62b70  addiu       $a2, $a2, 0x2B70
    ctx->pc = 0x182384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11120));
    // 0x182388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18238c: 0xc0be658  jal         func_2F9960
    ctx->pc = 0x18238Cu;
    SET_GPR_U32(ctx, 31, 0x182394u);
    ctx->pc = 0x182390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18238Cu;
    // 0x182390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F9960u, 0x18238Cu, 0x182394u)) {
        return;
    }
    ctx->pc = 0x182394u;
label_182394:
    // 0x182394: 0x8ec5fa80  lw          $a1, -0x580($s6)
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965888)));
    // 0x182398: 0x3c0b006c  lui         $t3, 0x6C
    ctx->pc = 0x182398u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)108 << 16));
    // 0x18239c: 0x3c0c006c  lui         $t4, 0x6C
    ctx->pc = 0x18239cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)108 << 16));
    // 0x1823a0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1823a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1823a4: 0x24a90010  addiu       $t1, $a1, 0x10
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1823a8: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x1823a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x1823ac: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x1823acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
    // 0x1823b0: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1823b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x1823b4: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1823b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1823b8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1823bc: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1823bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1823c4: 0xac65fa88  sw          $a1, -0x578($v1)
    ctx->pc = 0x1823c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BFA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA88u, _value); } while (0);
    // 0x1823c8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1823c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823cc: 0xacc9fa8c  sw          $t1, -0x574($a2)
    ctx->pc = 0x1823ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6BFA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA8Cu, _value); } while (0);
    // 0x1823d0: 0x24533b80  addiu       $s3, $v0, 0x3B80
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x1823d4: 0xacfe8a04  sw          $fp, -0x75FC($a3)
    ctx->pc = 0x1823d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x338A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338A04u, _value); } while (0);
    // 0x1823d8: 0xad048a08  sw          $a0, -0x75F8($t0)
    ctx->pc = 0x1823d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x338A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338A08u, _value); } while (0);
    // 0x1823dc: 0xad89fa84  sw          $t1, -0x57C($t4)
    ctx->pc = 0x1823dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x6BFA84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BFA84u, _value); } while (0);
    // 0x1823e0: 0xad403b84  sw          $zero, 0x3B84($t2)
    ctx->pc = 0x1823e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C3B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3B84u, _value); } while (0);
    // 0x1823e4: 0xad603b80  sw          $zero, 0x3B80($t3)
    ctx->pc = 0x1823e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6C3B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3B80u, _value); } while (0);
label_1823e8:
    // 0x1823e8: 0x8e453b80  lw          $a1, 0x3B80($s2)
    ctx->pc = 0x1823e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15232)));
    // 0x1823ec: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1823ECu;
    {
        const bool branch_taken_0x1823ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823ECu;
        // 0x1823f0: 0x2652823  subu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823ec) {
            ctx->pc = 0x182414u;
            goto label_182414;
        }
    }
    ctx->pc = 0x1823F4u;
    // 0x1823f4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1823f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_1823f8:
    // 0x1823f8: 0x2604fb80  addiu       $a0, $s0, -0x480
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
    // 0x1823fc: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x1823FCu;
    SET_GPR_U32(ctx, 31, 0x182404u);
    ctx->pc = 0x182400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823FCu;
    // 0x182400: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182ED0u, 0x1823FCu, 0x182404u)) {
        return;
    }
    ctx->pc = 0x182404u;
label_182404:
    // 0x182404: 0x0  nop
    ctx->pc = 0x182404u;
    // NOP
    // 0x182408: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x182408u;
    {
        const bool branch_taken_0x182408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182408u;
        // 0x18240c: 0xae423b80  sw          $v0, 0x3B80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 15232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182408) {
            ctx->pc = 0x1823F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1823f8;
        }
    }
    ctx->pc = 0x182410u;
    // 0x182410: 0x2605fb80  addiu       $a1, $s0, -0x480
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966144));
label_182414:
    // 0x182414: 0x8e263b80  lw          $a2, 0x3B80($s1)
    ctx->pc = 0x182414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15232)));
    // 0x182418: 0xc0bf6aa  jal         func_2FDAA8
    ctx->pc = 0x182418u;
    SET_GPR_U32(ctx, 31, 0x182420u);
    ctx->pc = 0x18241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182418u;
    // 0x18241c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAA8u, 0x182418u, 0x182420u)) {
        return;
    }
    ctx->pc = 0x182420u;
label_182420:
    // 0x182420: 0x8e233b80  lw          $v1, 0x3B80($s1)
    ctx->pc = 0x182420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15232)));
    // 0x182424: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x182424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182428: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x182428u;
    {
        const bool branch_taken_0x182428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182428u;
        // 0x18242c: 0xae233b80  sw          $v1, 0x3B80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15232), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182428) {
            ctx->pc = 0x1823E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1823e8;
        }
    }
    ctx->pc = 0x182430u;
label_182430:
    // 0x182430: 0x8ee289fc  lw          $v0, -0x7604($s7)
    ctx->pc = 0x182430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937084)));
    // 0x182434: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x182434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x182438: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x182438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18243c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18243cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182440: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x182440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182444: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x182444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182448: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x182448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18244c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x18244cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182450: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x182450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182454: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x182454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18245c: 0x3e00008  jr          $ra
    ctx->pc = 0x18245Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18245Cu;
        // 0x182460: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18245Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182464u;
    // 0x182464: 0x0  nop
    ctx->pc = 0x182464u;
    // NOP
    ctx->pc = 0x182468u;
}
